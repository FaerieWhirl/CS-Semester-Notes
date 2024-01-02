# include <iostream>
# include  "io.h"
# include "io.cpp"
#include <fstream>
#include <sstream>

int main() {
    MyStruct obj;
    std::stringstream inputStringStream;
    std::stringstream outputStringStream;

    // Insert data into the input stringstream
    inputStringStream << "1 2\n3 4\n5 6";

    while (inputStringStream >> obj) {
        std::cout << "Read from string stream: " << obj << std::endl;
        outputStringStream << "Written to string stream: " << obj << std::endl;
    }

    // Output the result from the output stringstream
    std::cout << "Output string stream content:\n" << outputStringStream.str() << std::endl;

    return 0;
}