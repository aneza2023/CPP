
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &orig) : std::stack<T>(orig) {}

template <typename T>
MutantStack<T



