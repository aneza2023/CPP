#include "Serializer.hpp"
#include "Data.hpp"

int main() {

    Data j;
    j.value = 42;
    j.name = "Jana";

    std::cout << "Original Address: " << &j << std::endl;
    std::cout << "Original Value: " << j.value << std::endl;
    std::cout << "Original Name: " << j.name << std::endl;
    std::cout << std::endl;

    uintptr_t k;
    k = Serializer::serialize(&j);

    Data *newj = Serializer::deserialize(k);
    
    std::cout << "Address: " << newj << std::endl;
    std::cout << "Value: " << newj->value << std::endl;
    std::cout << "Name: " << newj->name << std::endl;
    std::cout << std::endl;

    if (newj == &j) {
        std::cout << "Returned value compares to the original address." << std::endl;
    } else {
        std::cout << "Returned value does not compare to the original address." << std::endl;
    }

    return 0;
}