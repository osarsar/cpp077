#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F function) {
    for (size_t i = 0; i < length; ++i) {
        function(array[i]);
    }
}

// Example function template for testing
template <typename T>
void printElement(const T& element) 
{
    std::cout << element << " ";
}