#include <iostream>
#include "funcs.h"
int main()
{

    std::cout << "The numbers in range 1-9 not including 9 are: ";
    print_interval(1, 9);
    std::cout << std::endl;
    std::cout << "The numbers in range 10-20 not including 20 are: ";
    print_interval(10, 20);
    std::cout << std::endl;
    std::cout << "The numbers in range 13-25 not including 25 are: ";
    print_interval(13, 25);
    std::cout << std::endl;

    return 0;
}