#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm  : public AForm {
    private:
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &orig);
        RobotomyRequestForm&operator=(const RobotomyRequestForm &orig);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
} ;

#endif