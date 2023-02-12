#include <iostream>
#include "funcs.h"
int main()
{

    std::cout << "The numbers in range -5-10 not including 10 are: ";
    print_interval(-5, 10);
    std::cout << std::endl;
    std::cout << "The numbers in range 0-20 not including 20 are: ";
    print_interval(0, 20);
    std::cout << std::endl;
    std::cout << "The numbers in range 13-25 not including 25 are: ";
    print_interval(13, 25);
    std::cout << std::endl;

    return 0;
}