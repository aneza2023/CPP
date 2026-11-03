#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <utility>
#include <sys/time.h>
#include <deque>
#include <cctype>
#include <exception>

class PmergeMe {

    private:
        std::vector<int>    _vvalues;
        std::deque<int>     _lvalues;
        std::vector<int>    _input;

        class PmergeMeException : public std::exception {
            private:
                std::string     _msg;
            public:
                PmergeMeException(const std::string msg);
                virtual ~PmergeMeException() throw();
                virtual const char* what() const throw();
        } ;

        void isValueValid(const std::string& value);
        void sortVector(std::vector<int>& vec);
        void sortDeque(std::deque<int>& lis);
        std::vector<int> jacobsthalseq(int size);
        long elapsedTime(const struct timeval& start, const struct timeval& end);

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& orig);
        PmergeMe& operator=(const PmergeMe& orig);
        ~PmergeMe();

        void addValue(const std::string& args);
        void runPmergeMe();
        
} ;

#endif