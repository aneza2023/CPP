#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("not disclosed"), _grade(150) {
    // std::cout << "default constructor for bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw GradeTooHighException("grade is too high");
    if (grade > 150)
        throw GradeTooLowException("grade is too low");
    // std::cout << "constructor for bureaucrat " << _name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &orig) : _name(orig._name), _grade(orig._grade) {
    // std::cout << "copy constructor for bureaucrat called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &orig) {
    if (this != &orig) {
        this->_grade = orig._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    // std::cout << "destructor for bureaucrat called" << std::endl;
}

std::string Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::incrementGrade(void) {
    if (this->_grade - 1 < 1)
        throw GradeTooHighException("grade is too high");
    this->_grade--;
}

void Bureaucrat::decrementGrade(void) {
    if (this->_grade + 1 > 150)
        throw GradeTooLowException("grade is too low");
    this->_grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string msg) : _msg(msg) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return _msg.c_str();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string msg) : _msg(msg) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return _msg.c_str();
}

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& orig) {
    ostream << orig.getName() << ", bureaucrat grade " << orig.getGrade() << ".";
    return ostream;
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        if (form.getSigned())
            std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << this->_name << " coudn't sign " << form.getName() << " because ";
        std::cout << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException &e) {
        std::cout << this->_name << " coudn't sign " << form.getName() << " because ";
        std::cout << e.what() << std::endl;
    }
}
