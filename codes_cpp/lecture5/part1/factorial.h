#pragma once

//exercise 1
// unsigned int compuFactorial(unsigned int n);

//in exercise 2 instead of returning an unsigned integer by value 
//it has a void return type, and (2) in addition to taking an unsigned integer by value (which contains 
//the number whose factorial is being computed) the function also takes a second argument of type 
//unsigned integer by reference,
//void compuFactorial(unsigned int n, unsigned int& result);

//exercise 3 t it takes a pointer to an unsigned integer by value, instead of taking an unsigned integer by reference.
void compuFactorial(unsigned int n, unsigned int* result);

//exercise 4 Declare and define another function that takes two unsigned integers as arguments by value and returns 
// unsigned int compuPower1(unsigned int base, unsigned int exp = 4);

// unsigned int compuPower2(unsigned int base = 2, unsigned int exp);

// unsigned int compuPower3(unsigned int base = 2, unsigned int exp = 2);
