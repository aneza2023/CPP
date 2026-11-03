#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& orig) : _vvalues(orig._vvalues), _lvalues(orig._lvalues), _input(orig._input) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& orig) {

    if (this != &orig) {
        this->_vvalues = orig._vvalues;
        this->_lvalues = orig._lvalues;
        this->_input = orig._input;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMeException::PmergeMeException(const std::string msg) : _msg(msg) {}
PmergeMe::PmergeMeException::~PmergeMeException() throw() {}
const char* PmergeMe::PmergeMeException::what() const throw() {   return _msg.c_str();    } 

void PmergeMe::isValueValid(const std::string& value) {

    size_t i = 0;
    if (i < value.length() && value[i] == '+')
        i++;

    if (i == value.length())
        throw PmergeMe::PmergeMeException("wrong input");

    while(i < value.length()) {
        if (!std::isdigit(static_cast<unsigned char>(value[i])))
            throw PmergeMe::PmergeMeException("wrong input");
        i++;
    }

    long lvalue = std::strtol(value.c_str(), NULL, 10);
    if (lvalue <= 0) 
        throw PmergeMe::PmergeMeException("not a positive int");
    else if (lvalue > INT_MAX) 
        throw PmergeMe::PmergeMeException("too large for int");

    return ;
}

void PmergeMe::addValue(const std::string& args) {

    isValueValid(args);
    int value = std::strtol(args.c_str(), NULL, 10);
    this->_input.push_back(value);
}

std::vector<int> PmergeMe::jacobsthalseq(int size) {

    std::vector<int> sequence;
    int prev = 1;
    int curr = 3;

    while (prev < size) {
        int start = std::min(curr, size);
        for (int i = start; i > prev; i--) 
            sequence.push_back(i - 1);
        int next = curr + (prev * 2);
        prev = curr;
        curr = next;
    }

    return sequence;
}

void PmergeMe::sortVector(std::vector<int>& vec) {

    if (vec.size() < 2)
        return ;

    int straggler = -1;
    if (vec.size() % 2 != 0)
        straggler = vec.back();

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i + 1 < vec.size(); i += 2) {

        if (vec[i] > vec[i + 1])
            pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
        else 
            pairs.push_back(std::make_pair(vec[i + 1], vec[i])); 
    }

    std::vector<int> bigger;
    for (size_t i = 0; i < pairs.size(); i++) 
        bigger.push_back(pairs[i].first);
    sortVector(bigger);

    std::vector<int> pend;
    for (size_t i = 0; i < bigger.size(); i++) {
        for (size_t k = 0; k < pairs.size(); k++) {

            if (pairs[k].first == bigger[i]) {
                pend.push_back(pairs[k].second);
                pairs.erase(pairs.begin() + k);
                break;
            }
        }
    }

    std::vector<int> mainChain;
    mainChain = bigger;
    mainChain.insert(mainChain.begin(), pend[0]);

    std::vector<int> sortseq = jacobsthalseq(pend.size());
    for (size_t i = 0; i < sortseq.size(); i++) {
        int d = sortseq[i];
        std::vector<int>::iterator end = std::find(mainChain.begin(), mainChain.end(), bigger[d]);
        mainChain.insert(std::lower_bound(mainChain.begin(), end, pend[d]), pend[d]);
    }

    if (straggler != -1)
        mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), straggler), straggler);

    vec = mainChain;
}

void PmergeMe::sortDeque(std::deque<int>& deq) {

    if (deq.size() < 2)
        return ;

    int straggler = -1;
    if (deq.size() % 2 != 0)
        straggler = deq.back();

    std::deque<std::pair<int, int> > pairs;
    for (size_t i = 0; i + 1 < deq.size(); i += 2) {

        if (deq[i] > deq[i + 1])
            pairs.push_back(std::make_pair(deq[i], deq[i + 1]));
        else 
            pairs.push_back(std::make_pair(deq[i + 1], deq[i])); 
    }

    std::deque<int> bigger;
    for (size_t i = 0; i < pairs.size(); i++) 
        bigger.push_back(pairs[i].first);
    sortDeque(bigger);

    std::deque<int> pend;
    for (size_t i = 0; i < bigger.size(); i++) {
        for (size_t k = 0; k < pairs.size(); k++) {

            if (pairs[k].first == bigger[i]) {
                pend.push_back(pairs[k].second);
                pairs.erase(pairs.begin() + k);
                break;
            }
        }
    }

    std::deque<int> mainChain;
    mainChain = bigger;
    mainChain.push_front(pend[0]);

    std::vector<int> sortseq = jacobsthalseq(pend.size());
    for (size_t i = 0; i < sortseq.size(); i++) {
        int d = sortseq[i];
        std::deque<int>::iterator end = std::find(mainChain.begin(), mainChain.end(), bigger[d]);
        mainChain.insert(std::lower_bound(mainChain.begin(), end, pend[d]), pend[d]);
    }

    if (straggler != -1)
        mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), straggler), straggler);

    deq = mainChain;
}

long PmergeMe::elapsedTime(const struct timeval& start, const struct timeval& end) {

    long result;
    result = (end.tv_sec - start.tv_sec) * 1000000L + (end.tv_usec - start.tv_usec);
    
    return result;
}

void PmergeMe::runPmergeMe(void) {

    std::cout << "Before: ";
    for (size_t i = 0; i < this->_input.size(); i++)
        std::cout << this->_input[i] << " ";
    std::cout << std::endl;

    struct timeval start;
    struct timeval end;
    
    gettimeofday(&start, NULL);
    this->_vvalues.assign(this->_input.begin(), this->_input.end());
    sortVector(this->_vvalues);
    gettimeofday(&end, NULL);
    long vTime = elapsedTime(start, end);

    gettimeofday(&start, NULL);
    this->_lvalues.assign(this->_input.begin(), this->_input.end());
    sortDeque(this->_lvalues);
    gettimeofday(&end, NULL);
    long dTime = elapsedTime(start, end);

    std::cout << "After: ";
    for (size_t i = 0; i < this->_vvalues.size(); i++)
        std::cout << this->_vvalues[i] << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << this->_input.size() << " elements with std::vector: " << vTime << " us" << std::endl;
    std::cout << "Time to process a range of " << this->_input.size() << " elements with std::deque: " << dTime << " us" << std::endl;

    // std::cout << "After dq: ";
    // for (size_t i = 0; i < this->_vvalues.size(); i++)
    //     std::cout << this->_lvalues[i] << " ";
    // std::cout << std::endl;
}