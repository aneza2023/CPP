#include "RPN.hpp"

rpn::rpn() {}

rpn::rpn(const rpn& orig) : _values(orig._values) {}

rpn& rpn::operator=(const rpn& orig) {

    if (this != &orig)
        this->_values = orig._values;
    return *this;
}

rpn::~rpn() {}

rpn::rpnException::rpnException(std::string msg) : _msg(msg) {}
rpn::rpnException::~rpnException() throw() {}
const char* rpn::rpnException::what() const throw() {   return _msg.c_str();    } 

void    rpn::runRPN(const std::string& args) {

    std::istringstream ss(args);
    std::string token;

    while(ss >> token) {
       
        if (token.length() != 1)
            throw rpn::rpnException("incorrect input");
        if (std::isdigit(static_cast<unsigned char>(token[0])))
            this->_values.push(token[0] - '0');
        else {
            if (token[0] != '+' && token[0] != '*' && token[0] != '-' && token[0] != '/')
                throw rpn::rpnException("incorrect input");
            if (this->_values.size() < 2)
                throw rpn::rpnException("not enough operands");
            int b = this->_values.top();
            this->_values.pop();
            int a = this->_values.top();
            this->_values.pop();

            double check = 0;
            if (token[0] == '+')
                check = static_cast<double>(a) + b;
            else if (token[0] == '-')
                check = static_cast<double>(a) - b;
            else if (token[0] == '*')
                check = static_cast<double>(a) * b;
            else if (token[0] == '/') {
                if (b == 0)
                    throw rpn::rpnException("cannot divide by 0");
                check = static_cast<double>(a) / b;
            }
            if (check > INT_MAX || check < INT_MIN)
                throw rpn::rpnException("overflow");

            int res = 0;
            if (token[0] == '*')
                res = a * b;
            else if (token[0] == '+')
                res = a + b;
            else if (token[0] == '/') {
                if (b == 0)
                    throw rpn::rpnException("cannot divide by 0");
                res = a / b;
            }
            else if (token[0] == '-')
                res = a - b;
            this->_values.push(res);
        }
    }
    if (this->_values.size() != 1)
        throw rpn::rpnException("incorrect number of operands");
    std::cout << this->_values.top() << std::endl;
}