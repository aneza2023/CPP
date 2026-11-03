#include "PmergeMe.hpp"

int main(int ac, char *av[]) {

    if (ac < 2) {
        std::cerr << "Error: incorrect number of arguments" <<std::endl;
        return 1;
    }

    try {
        PmergeMe m;

        for (int i = 1; i < ac; i++)
            m.addValue(av[i]);
        m.runPmergeMe();
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}