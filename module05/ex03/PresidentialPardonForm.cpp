#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon form", 25, 5) {
    this->_target = "targetnotspecified"; 
    // std::cout << "default constructor for presidential pardon form called" << std::endl;   
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon form", 25, 5) {
    this->_target = target;
    // std::cout << "constructor for presidential pardon form called" << std::endl;   
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &orig) : AForm(orig) {
    this->_target = orig._target;
    // std::cout << "copy constructor for presidential pardon form called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &orig) {
    if (this != &orig) {
        AForm::operator=(orig);
        this->_target = orig._target;
    }
    return *this;
    // std::cout << "assignment operator for presidential pardon form called" << std::endl;
}   

PresidentialPardonForm::~PresidentialPardonForm(void) {
    // std::cout << "destructor for presidential pardon form called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonFormException::PresidentialPardonFormException(std::string msg) : _msg(msg) {}    

PresidentialPardonForm::PresidentialPardonFormException::~PresidentialPardonFormException() throw() {}

const char* PresidentialPardonForm::PresidentialPardonFormException::what() const throw() {
    return _msg.c_str();
}

void PresidentialPardonForm::executeAction() const {
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
