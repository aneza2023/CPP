#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
    
    private:
        std::string const   _name;
        bool                _signed;
        const int           _gradetoSign;
        const int           _gradetoExecute;
    
    protected:
        virtual void executeAction(void) const = 0;
    
    public:
        AForm();
        AForm(std::string name);
        AForm(const std::string name, int grade, int gradeExecute);
        AForm(const AForm &orig);
        AForm&operator=(const AForm &orig);
        virtual ~AForm();

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
        class AFormException : public std::exception {
            private:
                std::string     _msg;
            public:
                AFormException(std::string msg);
                virtual ~AFormException() throw();
                virtual const char* what() const throw();
        } ;

        void execute(Bureaucrat const & executor) const;
} ;

std::ostream& operator<<(std::ostream& ostream, const AForm& orig);

#endif