#include "Span.hpp"

Span::Span() : _maxN(0){}

Span::Span(unsigned int n) : _maxN(n){}

Span::Span(const Span &orig) : _maxN(orig._maxN), _num(orig._num) {}

Span& Span::operator=(const Span &orig) {

    if (this == &orig)
        return *this;

    this->_maxN = orig._maxN;
    this->_num = orig._num;

    return *this;
}

Span::~Span() {}


Span::FullVector::FullVector(std::string exceptionMsg) : _exceptionMsg(exceptionMsg) {}

const char* Span::FullVector::what() const throw() {

    return _exceptionMsg.c_str();
}

Span::FullVector::~FullVector() throw () {}

Span::NotEnoughtNums::NotEnoughtNums(std::string exceptionMsg) : _exceptionMsg(exceptionMsg) {}

const char* Span::NotEnoughtNums::what() const throw() {

    return _exceptionMsg.c_str();
}

Span::NotEnoughtNums::~NotEnoughtNums() throw () {}


void Span::addNumber(int num) {

    if (this->_num.size() >= this->_maxN) 
        throw FullVector("vector already full, cannot add more elements");
    this->_num.push_back(num);
    
}

unsigned int Span::shortestSpan(void) {

    if (this->_num.size() <= 1)
        throw NotEnoughtNums("too little elements in the vector");
    
    std::vector<int> copy = this->_num;
    std::sort(copy.begin(), copy.end());
    std::vector<int>::iterator it = copy.begin();

    int temp = *(it + 1) - *it;
    for (it = copy.begin(); it != copy.end() - 1; it++) {
        
        if (temp > *(it + 1) - *it)
            temp = *(it + 1) - *it;
    }

    return temp;
}

unsigned int Span::longestSpan(void) {

    if (this->_num.size() <= 1)
        throw NotEnoughtNums("too little elements in the vector");

    std::vector<int>::iterator min = std::min_element(this->_num.begin(), this->_num.end());
    std::vector<int>::iterator max = std::max_element(this->_num.begin(), this->_num.end());

    return *max - *min;
}

