/*
    Name_u.cpp

    Example use program for Name
*/

#include <iostream>
#include "Name.hpp"

int main() {

    Name fred("Fréd", "Smith");
    fred.outputName(std::cout);
    std::cout << '\n';

    Name jane("Jane", "Morris", "Goodall");
    jane.outputName(std::cout);
    std::cout << '\n';

    Name lovejoy("Lovejoy");
    lovejoy.outputName(std::cout);
    std::cout << '\n';

    return 0;
}
