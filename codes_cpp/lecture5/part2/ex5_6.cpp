#include "ex5_6.h"
#include <iostream>
//ex5
void processArray(size_t size, unsigned int values[]) {
    // Modify the values in the array
    for (size_t i = 0; i < size; ++i) {
        values[i] *= 2;
    }
}

//ex6
// void processArray(size_t size, const unsigned int const *values) {
//     // Modify the values using pointer arithmetic
//     for (size_t i = 0; i < size; ++i) {
//         *(values + i) *= 2;
//     }
// }


