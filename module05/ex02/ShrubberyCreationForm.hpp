#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm  : public AForm {
    private:
        std::string     _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &orig);
        ShrubberyCreationForm&operator=(const ShrubberyCreationForm &orig);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
        class ShrubberyException : public std::exception {
            private:
                std::string     _msg;
            public:
                ShrubberyException(std::string msg);
                virtual ~ShrubberyException() throw();
                virtual const char* what() const throw();
        } ;
} ;

#endif