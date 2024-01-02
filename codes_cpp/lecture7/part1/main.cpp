# include <iostream>
# include  "io.h"
# include "io.cpp"
#include <fstream>

using namespace std;


//exercise1,2
// int main() {
//     // Declare an object of the struct type
//     MyStruct myObj;

//     // Try to insert the object directly into cout
//     std::cout << myObj << std::endl;

//     return 0;
// }


// exercise 3

// int main() {
//     MyStruct obj;

//     //Number of times to prompt user for values
//     int N = 5; 

//     for(int i=0; i < N; i++) {
//         // Prompt user to input values for the object
//         std::cout << "Enter values for MyStruct (Ctrl-C to quit):\n";
        
//         // Extract values from cin into the object
//         std::cin >> obj;

//         // Insert the object into cout
//         std::cout << "You entered: " << obj << std::endl;
//     }

//     return 0;
// }


//exercise 4

// int main(int argc, char* argv[]) {
//     if (argc != 2) {
//         std::cerr << "Usage: " << argv[0] << " input.txt" << std::endl;
//         return 1;
//     }

//     const char* inputFileName = argv[1];

//     std::ifstream inputFile(inputFileName);

//     if (!inputFile.is_open()) {
//         std::cerr << "Error: Could not open input file '" << inputFileName << "'" << std::endl;
//         return 2;
//     }

//     MyStruct obj;

//     while (inputFile >> obj) {
//         std::cout << "Read from file: " << obj << std::endl;
//     }

//     inputFile.close();

//     return 0;
// }


// Exercise 5


int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " input.txt output.txt" << std::endl;
        return 1;
    }

    const char* inputFileName = argv[1];
    const char* outputFileName = argv[2];

    std::ifstream inputFile(inputFileName);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file '" << inputFileName << "'" << std::endl;
        return 2;
    }

    std::ofstream outputFile(outputFileName);

    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open output file '" << outputFileName << "'" << std::endl;
        return 3;
    }

    MyStruct obj;

    while (inputFile >> obj) {
        std::cout << "Read from file: " << obj << std::endl;
        outputFile << "Written to file: " << obj << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}











