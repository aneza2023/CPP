#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl; 
std::cout << i->getType() << " " << std::endl; 
j->makeSound();
i->makeSound();
meta->makeSound();
std::cout << std::endl;

const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* wrongI = new WrongCat();
std::cout << wrongI->getType() << " " << std::endl; 
wrongI->makeSound();
wrongmeta->makeSound();

delete meta;
delete i;
delete j;
delete wrongmeta;
delete wrongI;
return 0;
}