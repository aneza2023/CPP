#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &orig);
        Bureaucrat&operator=(const Bureaucrat &orig);
        ~Bureaucrat();
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        class GradeTooHighException : public std::exception {
            private:
                std::string     _msg;
            public:
                GradeTooHighException(std::string msg);
                virtual ~GradeTooHighException() throw();
                virtual const char* what() const throw();
        } ;
        class GradeTooLowException : public std::exception {
            private:
                std::string     _msg;
            public:
                GradeTooLowException(std::string msg);
                virtual ~GradeTooLowException() throw();
                virtual const char* what() const throw();
        } ;
        void signForm(Form &form);
} ;

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& orig);

#endif