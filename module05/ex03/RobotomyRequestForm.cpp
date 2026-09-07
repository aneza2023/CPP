#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request form", 72, 45) {
    // std::cout << "default constructor for robotomy request form called" << std::endl;
    this->_target = "targetnotspecified";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request form", 72, 45) {
    // std::cout << "constructor for robotomy request form called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &orig) : AForm(orig) {
    this->_target = orig._target;
    // std::cout << "copy constructor for robotomy request form called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &orig) {
    if (this != &orig) {
        AForm::operator=(orig);
        this->_target = orig._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    // std::cout << "destructor for robotomy request form called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestFormException::RobotomyRequestFormException(std::string msg) : _msg(msg) {}

RobotomyRequestForm::RobotomyRequestFormException::~RobotomyRequestFormException() throw() {}

const char* RobotomyRequestForm::RobotomyRequestFormException::what() const throw() {
    return _msg.c_str();
}

void RobotomyRequestForm::executeAction() const {
    std::cout << "Drilling noises..." << std::endl;

    static bool toggle = false;
    toggle = !toggle;

    //using rand() % 2 
    
    if (toggle) {
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << this->_target << "." << std::endl;
    }
}