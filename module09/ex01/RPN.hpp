#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cctype>
#include <exception>
#include <climits>
#include <list>

class rpn {
    
    private:
        std::stack<int, std::list<int> >   _values; 

        class rpnException : public std::exception {
            private:
                std::string     _msg;
            public:
                rpnException(std::string msg);
                virtual ~rpnException() throw();
                virtual const char* what() const throw();
        } ;

    public:
        rpn();
        rpn(const rpn& orig);
        rpn& operator=(const rpn& orig);
        ~rpn();

        void runRPN(const std::string& args);


} ;

#endif