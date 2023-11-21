#include "iter.hpp"
// Function template iter


int main() 
{
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLength = sizeof(intArray) / sizeof(int);

    std::cout << "Iterating over intArray: ";
    iter(intArray, intLength, printElement<int>);
    std::cout << std::endl;

    // Test with an array of doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleLength = sizeof(doubleArray) / sizeof(double);

    std::cout << "Iterating over doubleArray: ";
    iter(doubleArray, doubleLength, printElement<double>);
    std::cout << std::endl;

    // Test with an array of strings
    std::string stringArray[] = {"apple", "banana", "orange", "grape", "melon"};
    size_t stringLength = sizeof(stringArray) / sizeof(std::string);

    std::cout << "Iterating over stringArray: ";
    iter(stringArray, stringLength, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
