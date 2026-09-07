#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"


class Intern {
    
    public:
        Intern();
        Intern(const Intern &orig);
        Intern& operator=(const Intern &orig);
        ~Intern();

        AForm* makeForm(std::string formName, std::string target) const;
}

#endif