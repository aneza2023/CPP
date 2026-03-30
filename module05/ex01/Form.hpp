#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        bool                _signed;
        const int           _gradetoSign;
        const int           _gradetoExecute;
    public:
        Form();
        Form(std::string name);
        Form(const std::string name, int grade, int gradeExecute);
        Form(const Form &orig);
        Form&operator=(const Form &orig);
        ~Form();
        std::string getName(void) const;
        int         getGradetoSign(void) const;
        int         getGradetoExecute(void) const;
        bool        getSigned(void) const;
        void        beSigned(const Bureaucrat &bureau);
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
} ;

std::ostream& operator<<(std::ostream& ostream, const Form& orig);

#endif