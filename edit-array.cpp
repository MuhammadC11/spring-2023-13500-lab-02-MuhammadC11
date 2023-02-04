#include <iostream>

int main()
{
    int myData[10];              // created an array of 10 integers
    for (int i = 0; i < 10; i++) // loop to initialize the array with 1s and print them
    {
        myData[i] = 1;
        std::cout << myData[i] << " ";
    }
    std::cout << std::endl
              << std::endl;
    std::cout << "input an index to change: ";
    int index;
    std::cin >> index;
    std::cout << "input a new value: ";
    int value;
    std::cin >> value;
    do
    {

        if (index >= 0 && index < 10)
        {

            myData[index] = value;
            std::cout << std::endl
                      << std::endl;
            for (int i = 0; i < 10; i++)
            {
                std::cout << myData[i] << " ";
            }
            std::cout << std::endl
                      << std::endl;
            std::cout << "input an index to change: ";
            std::cin >> index;
            std::cout << "input a new value: ";
            std::cin >> value;
        }
        else
        {
            std::cout << "index out of range" << std::endl;
        }

    } while (index >= 0 && index < 10);
    return 0;
}