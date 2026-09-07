#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &orig) {
    *this = orig;
}

Intern& Intern::operator=(const Intern &orig) {
    (void)orig;
    return *this;
}

Intern::~Intern() { //destructor
}

AForm* Intern::shrubberyCreation(std::string target) const {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::robotomyRequest(std::string target) const {
    return new RobotomyRequestForm(target);
}

AForm* Intern::presidentialPardon(std::string target) const {
    return new PresidentialPardonForm(target);
}

Intern::InternException::InternException(std::string msg) : _msg(msg) {}

Intern::InternException::~InternException() throw() {}

const char* Intern::InternException::what() const throw() {
    return _msg.c_str();
}

AForm* Intern::makeForm(std::string formName, std::string target) const {
    std::string arrayForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*arrayFormsFunctions[3])(std::string) const = {&Intern::shrubberyCreation, &Intern::robotomyRequest, &Intern::presidentialPardon};


    for (int i = 0; i < 3; i++) {
        if (formName == arrayForms[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*arrayFormsFunctions[i])(target);
        }
    }
    throw InternException("Form > " + formName + " < not found");
}