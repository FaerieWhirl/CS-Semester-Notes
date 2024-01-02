#include <vector> // standard template library
#include <iostream>
#include "first_struct.h"
#include "first_struct.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
    // Declare an object of the struct type
    MyStruct ex1_object;
    
    //print out ex1_object before constructor
    
    cout << "After Constructor: Member1 = " << ex1_object.member1 << "   Member2 = " << ex1_object.member2 << endl;

    return 0;
}


