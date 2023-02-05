#include <iostream>
int main()
{

    int fib[60];                                 // created an array of 60 integers
    fib[0] = 0;                                  // initialized the first two elements of the array
    fib[1] = 1;                                  // initialized the first two elements of the array
    std::cout << fib[0] << " " << fib[1] << " "; // printed the first two elements of the array
    for (int i = 2; i < 60; i++)                 // loop to initialize the rest of the array and print them
    // started at two sice i already initialized the first two elements and i start at 0 because then the number would call a negative index
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // initialized the rest of the array
        std::cout << fib[i] << " ";       // printed the rest of the array
    }
}

// the numbers after 2 billion are negative because the numbers are too big for the int data type to hold and it overflows and becomes negative because it is a signed integer data type and the max value is 2 billion