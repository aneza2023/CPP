#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("not disclosed"), _signed(false), _gradetoSign(150), _gradetoExecute(150) {
    // std::cout << "default constructor for Aform called" << std::endl;
}

AForm::AForm(std::string name) : _name(name), _signed(false), _gradetoSign(150), _gradetoExecute(150) {
    // std::cout << "default constructor for Aform " << _name << " called" << std::endl;
}

AForm::AForm(const std::string name, int grade, int gradeExecute) : _name(name), _signed(false), _gradetoSign(grade), _gradetoExecute(gradeExecute) {
    if (grade < 1|| gradeExecute < 1)
        throw GradeTooHighException("grade is too high");
    if (grade > 150 || gradeExecute > 150)
        throw GradeTooLowException("grade is too low");
    // std::cout << "constructor for Aform called" << std::endl;
}

AForm::AForm(const AForm &orig) : _name(orig._name), _signed(orig._signed), _gradetoSign(orig._gradetoSign), _gradetoExecute(orig._gradetoExecute) {
    // std::cout << "copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &orig) {
    if (this != &orig) {
        this->_signed = orig._signed;
    }
    return *this;
}

AForm::~AForm() {
    // std::cout << "destructor for Aform called" << std::endl;
}

std::string AForm::getName(void) const {
    return this->_name;
}

int AForm::getGradetoSign(void) const {
    return this->_gradetoSign;
}

int AForm::getGradetoExecute(void) const {
    return this->_gradetoExecute;
}

bool AForm::getSigned(void) const {
    return this->_signed;
}

AForm::GradeTooLowException::GradeTooLowException(std::string msg) : _msg(msg) {}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

const char* AForm::GradeTooLowException::what() const throw() {
    return _msg.c_str();
}

AForm::GradeTooHighException::GradeTooHighException(std::string msg) : _msg(msg) {}

AForm::GradeTooHighException::~GradeTooHighException() throw() {}

const char* AForm::GradeTooHighException::what() const throw() {
    return _msg.c_str();
}

AForm::AFormException::AFormException(std::string msg) : _msg(msg) {}

AForm::AFormException::~AFormException() throw() {}

const char* AForm::AFormException::what() const throw() {
    return _msg.c_str();
}

void AForm::beSigned(const Bureaucrat &bureau) {
    if (bureau.getGrade() <= this->_gradetoSign)
        this->_signed = true;
    else
        throw GradeTooLowException("grade is too low");
}

std::ostream& operator<<(std::ostream& ostream, const AForm& orig) {
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

void AForm::execute(const Bureaucrat &executor) const {
    if (!this->getSigned())
        throw AFormException("form is not signed to be executed");
    if (this->_gradetoExecute <= executor.getGrade())
        throw GradeTooLowException("grade too low to execute the form");
}