#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

    private:
    public:
        MutantStack();
        MutantStack(const MutantStack &orig);
        MutantStack& operator=(const MutantStack &orig);
        ~MutantStack();


};

#endif