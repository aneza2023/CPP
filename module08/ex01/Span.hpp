#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>

class Span {
    
    private:
        unsigned int        _maxN;
        std::vector<int>    _num;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span &orig);
        Span& operator=(const Span &orig);
        ~Span();

        void addNumber(int num);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
            
        template <typename T>
        void addNumber(T begin, T end);
    
        class FullVector : public std::exception {

            private:
                std::string _exceptionMsg;
            public:
                FullVector(std::string exceptionMsg);
                virtual ~FullVector() throw();
                virtual const char* what() const throw();
        };

        class NotEnoughtNums : public std::exception {

            private:
                std::string _exceptionMsg;
            public:
                NotEnoughtNums(std::string exceptionMsg);
                virtual ~NotEnoughtNums() throw();
                virtual const char* what() const throw();
        };

};

template <typename T>
void Span::addNumber(T begin, T end) {

    if (std::distance(begin, end) + this->_num.size() > this->_maxN)
        throw FullVector("there is too many elements to add");

    this->_num.insert(this->_num.end(), begin, end); 
}


#endif