#include "Card.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>


// Function to parse a file containing card definition strings
int parseCardFile(std::vector<Card>& cards, const char* filename) {
    // Open the file
    std::ifstream file(filename);

    // Check if the file is open
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file: " << filename << std::endl;
        return 1; // Return nonzero to indicate failure
    }

    std::string line;

    // Read the file line by line
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string cardString;

        // Read card definition strings from the line
        while (iss >> cardString) {
            // Check if the length is valid (2 or 3 characters)
            if (cardString.length() == 2 || cardString.length() == 3) {
                char rankChar = cardString[0];
                char suitChar = cardString.back();

                // Check if rank and suit characters are valid
                if ((rankChar >= '2' && rankChar <= '9') ||
                    rankChar == '1' ||
                    rankChar == 'J' || rankChar == 'Q' || rankChar == 'K' || rankChar == 'A') {
                    switch (suitChar) {
                        case 'C': case 'c':
                        case 'D': case 'd':
                        case 'H': case 'h':
                        case 'S': case 's':
                            // Valid card definition string
                            // Map rank and suit to corresponding enumerations
                            Rank rank;
                            Suit suit;
                            switch (rankChar) {
                                case '2': rank = Rank::Two; break;
                                case '3': rank = Rank::Three; break;
                                case '4': rank = Rank::Four; break;
                                case '5': rank = Rank::Five; break;
                                case '6': rank = Rank::Six; break;
                                case '7': rank = Rank::Seven; break;
                                case '8': rank = Rank::Eight; break;
                                case '9': rank = Rank::Nine; break;
                                case '1': rank = Rank::Ten; break;
                                case 'J': case 'j': rank = Rank::Jack; break;
                                case 'Q': case 'q': rank = Rank::Queen; break;
                                case 'K': case 'k': rank = Rank::King; break;
                                case 'A': case 'a': rank = Rank::Ace; break;
                            }
                            switch (suitChar) {
                                case 'C': case 'c': suit = Suit::Clubs; break;
                                case 'D': case 'd': suit = Suit::Diamonds; break;
                                case 'H': case 'h': suit = Suit::Hearts; break;
                                case 'S': case 's': suit = Suit::Spades; break;
                            }
                            // Push back the card into the vector
                            cards.push_back({ suit, rank });
                            break;
                        default:
                            // Invalid suit character
                            std::cerr << "Warning: Ignored invalid suit character in card string: " << cardString << std::endl;
                    }
                } else {
                    // Invalid rank character
                    std::cerr << "Warning: Ignored invalid rank character in card string: " << cardString << std::endl;
                }
            } else {
                // Invalid length of the card definition string
                std::cerr << "Warning: Ignored invalid length in card string: " << cardString << std::endl;
            }
        }
    }

    // Close the file
    file.close();

    // Return 0 to indicate success
    return 0;
}



// Function to print out a vector of card structs
int printCardVector(const std::vector<Card>& cards) {
    // Loop through the vector of cards
    for (const auto& card : cards) {
        char rankChar;
        switch (card.rank) 
        {
            case Rank::Two: rankChar = '2'; break;
            case Rank::Three: rankChar = '3'; break;
            case Rank::Four: rankChar = '4'; break;
            case Rank::Five: rankChar = '5'; break;
            case Rank::Six: rankChar = '6'; break;
            case Rank::Seven: rankChar = '7'; break;
            case Rank::Eight: rankChar = '8'; break;
            case Rank::Nine: rankChar = '9'; break;
            case Rank::Ten: rankChar = '0'; break; //for rank 10
            case Rank::Jack: rankChar = 'J'; break;
            case Rank::Queen: rankChar = 'Q'; break;
            case Rank::King: rankChar = 'K'; break;
            case Rank::Ace: rankChar = 'A'; break;
        
        }

        char suitChar;
        switch (card.suit) {
            case Suit::Clubs: suitChar = 'C'; break;
            case Suit::Diamonds: suitChar = 'D'; break;
            case Suit::Hearts: suitChar = 'H'; break;
            case Suit::Spades: suitChar = 'S'; break;
        }
        // Print the valid card definition string
        std::cout << rankChar << suitChar << std::endl;

    }
    // Return 0 to indicate success
    return 0;
}


// Function to print a usage message
int printUsageMessage(const std::string& programName) {
    std::cerr << "Usage: " << programName << " <file_name>" << std::endl;
    std::cerr << "  Reads card definitions from the specified file." << std::endl;
    return 1; // Return non-zero to indicate an error
}




