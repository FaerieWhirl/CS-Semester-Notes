---
highlight: github
---
# <p align=center> Studio Session on C++ IO Streams</p>
# 1. Part 1
## 1.1 Ex1
> Open Visual Studio and create a new Visual C++ Win32 Empty Project for this studio. Create a new header file and source file in your project and copy over the declarations and definitions for the struct from the previous studio exercises (the Classes studio) into those files, respectively. In your main function, declare an object of the struct type, and make sure your program can compile and run correctly. Then, try to **insert the object directly into cout** (as in cout << obj << endl;) and as the answer to this exercise explain what happens when you try to build your program.


insert the object directly into `cout` using `cout << obj << endl;`, it resulted in a compilation error.


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/47315b7334e34d05bbfe0f493f493c49~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1259&h=310&s=64547&e=png&b=1f1f1f)


<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/0dcdca136199424ba5f46c1fa57806ad~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=621&h=287&s=22017&e=png&b=1e1e1e" alt="image.png" width="50%" />

## 1.2 Ex2

> Declare and define an operator to insert objects of your struct type into an ostream, and in your program’s main function again try to insert the object directly into cout. Make sure that your program can compile and run, and as the answer to this exercise please show your implementation of the insertion operator and also show your program’s output (which should print out the values contained in the object this time around).

### 1.2.1 implementation of the insertion operator

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/0bfe2bff9c104a05b5dd4a0dc52c0f23~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1165&h=507&s=63479&e=png&b=1e1e1e)

### 1.2.2 output


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/1d6af24009e849028462e7b4ccb791e4~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=543&h=108&s=15889&e=png&b=1e1e1e)

## 1.3 Ex3

> Declare and define an operator to extract objects of your struct type from an istream, and in your program’s main function repeatedly (1) prompt the user to input values for the object (or hit Ctrl-C to quit), (2) extract values from cin into the object, and (3) insert the object into cout. Make sure that your program can compile and run, and as the answer to this exercise please show your implementation of the extraction operator and also show your program’s output with several repetitions of input and output.

### 1.3.1 code



```cpp
#include<iostream>
#pragma once

struct MyStruct {
    int member1;
    int member2;
    //add default constructor with member initialization list
    MyStruct() : member1(0), member2(0) {}

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& os, const MyStruct& obj) {
        os << "MyStruct { member1: " << obj.member1 << ", member2: " << obj.member2 << " }";
        return os;
    }


    // Overload >> operator
    friend std::istream& operator>>(std::istream& is, MyStruct& obj) {
        std::cout << "Enter member1: ";
        is >> obj.member1;

        std::cout << "Enter member2: ";
        is >> obj.member2;

        return is;
    }

};

```


### 1.3.2 output


<img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/038e8ff8bca1441083646a3db5fb5074~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=684&h=571&s=76305&e=png&b=1e1e1e" alt="image.png" width="70%" />


## 1.4 Ex4

> Repeat the previous exercise, but instead of taking input from cin, take it from an input file stream – pass the name of the file into the program as a command line argument, open the file, test whether or not it opened correctly, and if it did open correctly repeatedly extract values from the file until you reach the end of the file. Build your program, and in the directory where the executable program file was created, create a text file containing a number of different input values. Use that file to test your program, and as the answer to this exercise please show your code, the contents of the input file, and the output your program produced.  

### 1.4.1 code


```cpp
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " input.txt" << std::endl;
        return 1;
    }

    const char* inputFileName = argv[1];

    std::ifstream inputFile(inputFileName);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file '" << inputFileName << "'" << std::endl;
        return 2;
    }

    MyStruct obj;

    while (inputFile >> obj) {
        std::cout << "Read from file: " << obj << std::endl;
    }

    inputFile.close();

    return 0;
}

```

### 1.4.2 output

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/859560ff9cb44d0a852fc4dd2449bf73~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=941&h=147&s=25993&e=png&b=1e1e1e)

## 1.5 Ex5
> Repeat the previous exercise, but instead of inserting the object into cout, insert it into an output file stream – pass the names of the input and output files into the program as command line arguments, open the files (for reading and writing respectively), test whether or not they opened correctly, and if they did open correctly repeatedly extract values from the input file stream into the object and then insert the object into the output file stream, until you reach the end of the input file. Build and run your program using the input file from the previous exercise, and as the answer to this exercise please show your code, the contents of the input file, and of the output file that was produced.

### 1.5.1 codes


```cpp
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

```

### 1.5.2 output


![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/fe1f9ff3df674f61945f5c10782beb0a~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1017&h=513&s=64105&e=png&b=1e1e1e)


# 2. Part2
## 2.1 Ex6

> Modify your code from the previous exercise so instead of extracting data from, and inserting data into files it instead uses string streams to get the data out of and back into strings. Try reading from and writing to different strings, and as the answer to this exercise please show your code and the output your program produced.

### 2.1.1 code


```cpp
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

```

### 2.1.2 output

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/8172650f88814fffb3d1a910886eab98~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1017&h=513&s=64105&e=png&b=1e1e1e)

## 2.2 Ex7

> Try using different stream manipulators in the extraction and insertion operators for your struct to “pretty print” the data (and still be able to read it back in correctly) no matter what streams are involved. For example, you might want to put some kind of delimiter (square brackets, angle brackets, etc.) around the object’s values, and possibly separate them with a different delimiter (spaces, commas, etc.). Make sure that whatever format your insertion operator uses can be read successfully by your extraction operator. Build and run your program, and test it with different kinds of streams, and as the answer to this exercise explain briefly how you modified your extraction and insertion operators, show your code, and show the output of a representative run of your program.

### 2.2.1 code



### 2.2.2 output

> Try using different stream manipulators in the extraction and insertion operators for your struct to “pretty print” the data (and still be able to read it back in correctly) no matter what streams are involved. For example, you might want to put some kind of delimiter (square brackets, angle brackets, etc.) around the object’s values, and possibly separate them with a different delimiter (spaces, commas, etc.). Make sure that whatever format your insertion operator uses can be read successfully by your extraction operator. Build and run your program, and test it with different kinds of streams, and as the answer to this exercise explain briefly how you modified your extraction and insertion operators, show your code, and show the output of a representative run of your program.








