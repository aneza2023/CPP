#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // const Animal* j = new Dog(); 
    // const Animal* i = new Cat();
    // delete j;
    // delete i;

    int count = 6;
    Animal* groupA[count];
    for (int k = 0; k < count / 2; k++) {
        groupA[k] = new Dog();
    }
    for (int j = count / 2; j < count; j++) {
        groupA[j] = new Cat();
    }
    for (int m = 0; m < count; m++) {
        delete groupA[m];
    }
    return 0; 
}