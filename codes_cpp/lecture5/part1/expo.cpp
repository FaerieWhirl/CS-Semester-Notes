#include "expo.h"

// unsigned int expo(unsigned int base, unsigned int exp = 4){
//     unsigned int result = 1;
//     for(int i = 0; i < exp; i++){
//         result *= base;
//     }
//     return result;
// }

unsigned int expo(unsigned int base =2 , unsigned int exp = 2){
    unsigned int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}