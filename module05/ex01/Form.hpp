#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    private:
        std::string const   _name;
        bool                _signed;
        const int           _gradetoSign;
        const int           _gradetoExecute;
    public:
        std::string getName(void) const;
        int         getGradetoSign(void) const;
        int         getGradetoExecute(void) const;
        bool        getSigned(void) const;
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

#endif