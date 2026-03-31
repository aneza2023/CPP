#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation form", 145, 137) {
    // std::cout << "default constructor for shrubbery creation form called" << std::endl;
    this->_target = "targetnotspecified";    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery creation form", 145, 137) {
    // std::cout << "constructor for shrubbery creation called" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &orig) : AForm("shrubbery creation form", 145, 137) {
    this->_target = orig._target;
    // std::cout << "copy constructor for shubbery creation form called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &orig) {
    if (this != &orig)
        this->_target = orig._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    // std::cout << "destructor for shrubbery creation form called" << std::endl;
}

ShrubberyCreationForm::ShrubberyException::ShrubberyException(std::string msg) : _msg(msg) {}

ShrubberyCreationForm::ShrubberyException::~ShrubberyException() throw() {}

const char* ShrubberyCreationForm::ShrubberyException::what() const throw() {
    return _msg.c_str();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    AForm::execute(executor);
    std::string filename = this->_target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if (!outfile.is_open())
        throw ShrubberyException("file not created"); 
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}