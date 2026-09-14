#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <list>

template <typename T>
typename T::iterator easyfind(T &one, int two) {

    typename T::iterator f = std::find(one.begin(), one.end(), two);
    if (f == one.end())
        throw std::exception();

    return f;
    
}

#endif