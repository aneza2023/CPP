#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm  : public AForm {
    private:
        std::string     _target;

    protected:
        virtual void executeAction(void) const;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &orig);
        RobotomyRequestForm&operator=(const RobotomyRequestForm &orig);
        virtual ~RobotomyRequestForm();


        class RobotomyRequestFormException : public std::exception {
            private:
                std::string     _msg;
            public:
                RobotomyRequestFormException(std::string msg);
                virtual ~RobotomyRequestFormException() throw();
                virtual const char* what() const throw();
        } ;
} ;

#endif