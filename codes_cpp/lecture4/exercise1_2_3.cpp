#include<iostream>
#include<string>
using namespace std;



//define a function with a statement that is always reached in the execution of that function, which throws an int
// void firstFunction(){
//     //throw int
//     throw 77;
// }

//EXercise 1

// int main(int argc, char const *argv[])
// {
//     firstFunction();
//     return 0;
// }


//Exercise 2
//putting a try block around the call to that function

// int main(int argc, char const *argv[])
// {
//     try
//     {
//         firstFunction();
//     }
//     catch(int i)
//     {
//         //print integer
//         std::cout << "Caught an integer: " << i << std::endl;

//         return i;
//     }
    
//     return 0;
// }

//Exercise 3

//char
// void charFusenction(){
//     //throw char
//     char testC = 'happy';
//     throw testC;
    
// }

// int main(int argc, char const *argv[])
// {
//     charFusenction();
//     return 0;
// }

//long
// void longFunction() {
//     long eLong = 1234567890L;
//     throw eLong;
// }

// int main() {
//     try
//     {
//         longFunction();
//     }
//     catch(int i)
//     {
//         //print integer
//         std::cout << "Caught an integer: " << i << std::endl;

//         return i;
//     }
    
//     longFunction();
//     return 0;
// }


//string
void stringFunction(){
    string testS = "happy";
    throw testS;
}

int main(int argc, char const *argv[])
{
    stringFunction();
    return 0;
}




