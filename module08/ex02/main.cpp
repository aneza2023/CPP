#include "MutantStack.hpp"
#include <list>

int main(void) {

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << std::endl;

    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    std::list<int>::iterator itl = lstack.begin();
    std::list<int>::iterator itel = lstack.end();
    ++itl;
    --itl;
    while (itl != itel)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
    std::list<int> l(lstack);
    // return 0;    

    //more tests
    //independent copy
    std::cout << std::endl;
    MutantStack<int> copy(mstack);
    MutantStack<int> assigned;
    assigned = mstack;
    mstack.push(42);
    std::cout << "original size: " << mstack.size() << ", copy size: " << copy.size() << ", assigned size: " << assigned.size() << std::endl;

    // changing elements through an iterator
    std::cout << std::endl;
    for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); ++i)
        *i *= 2;
    std::cout << "top after *= 2: " << mstack.top() << std::endl;

    // works with other types too
    std::cout << std::endl;
    MutantStack<std::string> words;
    words.push("hello");
    words.push("world");
    for (MutantStack<std::string>::iterator w = words.begin(); w != words.end(); ++w)
        std::cout << *w << std::endl;

    return 0;
}