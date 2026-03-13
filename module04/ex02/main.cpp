#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Animal a; //now wont compile, since non-instantiable

    const int count = 6;
    AAnimal* groupA[count];

    for (int k = 0; k < count / 2; k++) {
        groupA[k] = new Dog();
        std::cout << std::endl;
    }
    for (int j = count / 2; j < count; j++) {
        groupA[j] = new Cat();
        std::cout << std::endl;
    }
    for (int m = 0; m < count; m++) {
        delete groupA[m];
    }

    //test for shallow copy
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    // basic.makeSound();
    return 0;
}