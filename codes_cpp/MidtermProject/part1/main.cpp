#include <iostream>
#include <vector>
#include "Card.h" 
#include "Card.cpp" 

int main(int argc, char* argv[]) {
    // Check if exactly one argument has been passed to the program
    if (argc != 2) {
        // Call the usage message function and return its value
        return printUsageMessage(argv[0]);
    }

    // Declare a vector of card structs
    std::vector<Card> cards;

    // Call the function that parses a file of card definition strings
    int parseResult = parseCardFile(cards, argv[1]);

    // Check the result of the parsing function
    if (parseResult != 0) {
        // If there was an error, return the result
        return parseResult;
    }

    // Call the function that prints out the vector of card structs
    int printResult = printCardVector(cards);

    // Return the result of the print function
    return printResult;
}
