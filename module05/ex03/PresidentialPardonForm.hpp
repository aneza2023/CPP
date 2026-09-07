#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    
    private:
        std::string _target;
    
    protected:
        virtual void executeAction() const;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &orig);
        PresidentialPardonForm&operator=(const PresidentialPardonForm &orig);
        virtual ~PresidentialPardonForm();

        class PresidentialPardonFormException : public std::exception {
            private:
                std::string     _msg;
            public:
                PresidentialPardonFormException(std::string msg);
                virtual ~PresidentialPardonFormException() throw();
                virtual const char* what() const throw();
        } ;
} ;

#endif