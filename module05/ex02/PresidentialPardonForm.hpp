#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &orig);
        PresidentialPardonForm&operator=(const PresidentialPardonForm &orig);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
} ;

#endif