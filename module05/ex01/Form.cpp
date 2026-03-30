#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("not disclosed"), _signed(false), _gradetoSign(150), _gradetoExecute(150) {
    std::cout << "default constructor for form called" << std::endl;
}

Form::Form(std::string name) : _name(name), _signed(false), _gradetoSign(150), _gradetoExecute(150) {
    std::cout << "default constructor for form " << _name << " called" << std::endl;
}

Form::Form(const std::string name, int grade, int gradeExecute) : _name(name), _signed(false), _gradetoSign(grade), _gradetoExecute(gradeExecute) {
    if (grade < 1|| gradeExecute < 1)
        throw GradeTooHighException("grade is too high");
    if (grade > 150 || gradeExecute > 150)
        throw GradeTooLowException("grade is too low");
    std::cout << "constructor for form called" << std::endl;
}

Form::Form(const Form &orig) : _name(orig._name), _signed(orig._signed), _gradetoSign(orig._gradetoSign), _gradetoExecute(orig._gradetoExecute) {
    std::cout << "copy constructor called" << std::endl;
}

Form& Form::operator=(const Form &orig) {
    if (this != &orig) {
        this->_signed = orig._signed;
    }
    return *this;
}

Form::~Form() {
    std::cout << "destructor for form called" << std::endl;
}

std::string Form::getName(void) const {
    return this->_name;
}

int Form::getGradetoSign(void) const {
    return this->_gradetoSign;
}

int Form::getGradetoExecute(void) const {
    return this->_gradetoExecute;
}

bool Form::getSigned(void) const {
    return this->_signed;
}

Form::GradeTooLowException::GradeTooLowException(std::string msg) : _msg(msg) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw() {
    return _msg.c_str();
}

Form::GradeTooHighException::GradeTooHighException(std::string msg) : _msg(msg) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {
    return _msg.c_str();
}

void Form::beSigned(const Bureaucrat &bureau) {
    if (bureau.getGrade() <= this->_gradetoSign)
        this->_signed = true;
    else
        throw GradeTooLowException("grade is too low");
}

std::ostream& operator<<(std::ostream& ostream, const Form& orig) {
    std::string temp;
    if (orig.getSigned())
        temp = ", signed: yes";
    else
        temp = ", signed: no";
    ostream << "Form: " << orig.getName() 
            << temp
            << ", grade to sign: " << orig.getGradetoSign()
            << ", grade to execute: " << orig.getGradetoExecute();
    return ostream;
}