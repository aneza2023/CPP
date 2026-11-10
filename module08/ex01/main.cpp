#include "Span.hpp"

int main(void) {

    //subject test
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    Span a(5);

    try {
        a.addNumber(23);
        a.addNumber(45);
        a.addNumber(1);
        a.addNumber(22);

        //test too much numbers
        std::vector<int> j;
        j.push_back(1);
        j.push_back(3);
        j.push_back(8);

        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;

        a.addNumber(j.begin(), j.end());

        //test not enough numbers
        Span k(5);
        k.addNumber(1);
        k.shortestSpan();
    }
    catch (Span::FullVector &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Span::NotEnoughtNums &e) {
        std::cout << e.what() << std::endl;
    }


    Span b(13268);
    std::vector<int> vectorB;
    srand(time(NULL));
    for (int i = 0; i < 13268; i++) {
        vectorB.push_back(rand());
    }

    try {
        std::cout << std::endl;
        b.addNumber(vectorB.begin(), vectorB.end());

        std::cout << b.shortestSpan() << std::endl;
        std::cout << b.longestSpan() << std::endl;
    }
    catch (Span::FullVector &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Span::NotEnoughtNums &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}