#include "Zombie.hpp"

int main(void) {
    Zombie* Zombie1 = newZombie("Jana");
    Zombie1->announce();
    delete Zombie1;

    randomChump("Ludva");
    return 0;
}