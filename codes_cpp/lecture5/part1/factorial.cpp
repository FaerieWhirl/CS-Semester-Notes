#include "factorial.h"

//using loop to compute factorial
// unsigned int compuFactorial(unsigned int n){
//     unsigned int result = 1;
//     for(unsigned int i = 1; i <= n; i++){
//         result *= i;
//     }
//     return result;
// }


//using recursion to compute factorial
// unsigned int compuFactorial(unsigned int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * compuFactorial(n - 1);
// }

//exercise 2
// void compuFactorial(unsigned int n, unsigned int& result) {
//     result = 1;
//     for (unsigned int i = 1; i <= n; ++i) {
//         result *= i;
//     }
// }

//exercise 3
void compuFactorial(unsigned int n, unsigned int* resultPtr){
    //consider the null
    if (resultPtr == nullptr)
    {
        return;
    }
    //the computation part
    *resultPtr = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        *resultPtr *= i;
    }   
}

//exercise 4
//(1)
// unsigned int compuPower1(unsigned int base, unsigned int exp /*=4*/){
//     unsigned int result = 1;
//     //compute base on the power of exp
//     for (unsigned int i = 0; i < exp; ++i) {
//         result *= base;
//     }
//     return result;
// }


//(2)
// unsigned int compuPower2(unsigned int base /*= 2*/, unsigned int exp){
//     unsigned int result = 1;
//     //compute base on the power of exp
//     for (unsigned int i = 0; i < exp; ++i) {
//         result *= base;
//     }
//     return result;
// }

//(3)
// unsigned int compuPower3(unsigned int base /*=2*/, unsigned int exp /*=2*/){
//     unsigned int result = 1;
//     //compute base on the power of exp
//     for (unsigned int i = 0; i < exp; ++i) {
//         result *= base;
//     }
//     return result;
// }