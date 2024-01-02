#include <iostream>
#include "factorial.h"
#include "factorial.cpp"


//exercise 1
// int main(int argc, char const *argv[])
// {
//     unsigned int input[]={0,1,4,5,6,11,12,17,20};
    
//     for (unsigned int value : input)
//     {
//         unsigned int result = compuFactorial(value);
//         std::cout << value << "! = " << result << std::endl;
//     }
//     system("pause");
//     return 0;
// }


//exercise 2
// int main(int argc, char const *argv[])
// {
//     unsigned int input[]={0,1,10,12,27};
    
//     for (unsigned int value : input)
//     {
//         unsigned int result;
//         compuFactorial(value,result);
//         std::cout << value << "! = " << result << std::endl;
//     }
//     system("pause");
//     return 0;
// }


//exrcise 3
int main(int argc, char const *argv[])
{
    unsigned int input[]={0,1,10,12,27};
    
    for (unsigned int value : input)
    {

        unsigned int result; 
        compuFactorial(value,&result);//we should call the result by address
        std::cout << value << "! = " << result << std::endl;
    }
    system("pause");
    return 0;
}


//exercise 4
// int main(int argc, char const *argv[])
// {
//     //(1)
//     unsigned int result1 = compuPower1(3);  // base = 3, exponent = 4 (default)
//     std::cout << "Result (1): " << result1 << std::endl;

//     //(2)
//     unsigned int result2 = compuPower2(3);  // base = 2(default), exponent = 3 
//     std::cout << "Result (2): " << result2 << std::endl;

//     //(3)
//     unsigned int result3 = compuPower3();  // base = 2(default), exponent = 2 (default)
//     std::cout << "Result (2): " << result2 << std::endl;


//     return 0;
// }

