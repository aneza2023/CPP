#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base *generate(void) {

    int randomNumber = rand() % 3;
    if (randomNumber == 0)
        return new A();
    else if (randomNumber == 1)
        return new B();
    else
        return new C();
}

void identify(Base *p) {

    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p) {

    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return;
    } catch (std::exception &e) {}
    
    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return;
    } catch (std::exception &e) {}
        
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return;
    } catch (std::exception &e) {
        std::cout << "Unknown type" << std::endl;
    }
}

int main(void) {
    
    srand(time(NULL));
    Base *randomBase = generate();

    identify(randomBase);
    identify(*randomBase);

    delete randomBase;
    return 0;
}