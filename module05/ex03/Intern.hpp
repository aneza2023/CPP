#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern {
    
    public:
        Intern();
        Intern(const Intern &orig);
        Intern& operator=(const Intern &orig);
        ~Intern();

        AForm* makeForm(std::string formName, std::string target) const;
        AForm* shrubberyCreation(std::string target) const;
        AForm* robotomyRequest(std::string target) const;
        AForm* presidentialPardon(std::string target) const;

        class InternException: public std::exception {
            private:
                std::string _msg;
            public:
                InternException(std::string msg);
                virtual ~InternException() throw();
                virtual const char* what() const throw();
        };
};

#endif