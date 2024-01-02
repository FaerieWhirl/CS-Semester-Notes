#include <iostream>
#include "ex5_6.h"
#include "ex5_6.cpp"

int main() {
    const size_t arraySize = 5;
    unsigned int myArray[arraySize] = {1, 2, 3, 4, 5};

    // Call the function with the number of positions and the array
    processArray(arraySize, myArray);

    // Output the modified array
    std::cout << "Modified Array: ";
    for (size_t i = 0; i < arraySize; ++i) {
        std::cout  << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
