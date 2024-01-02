#include "Card.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm> // for std::sort


// Function to parse a file containing card definition strings with richer structure
int parseRichCardFile(std::vector<Card>& cards, const char* filename) {
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
        size_t commentPos = line.find("//");
        if (commentPos != std::string::npos) {
            // If comment symbol is found, truncate the line
            line = line.substr(0, commentPos);
        }

        std::istringstream iss(line);
        std::string cardString;

        // Read card definition strings from the line
        size_t validCardCount = 0;
        while (iss >> cardString) {
            // Check if the length is valid (2 or 3 characters)
            if (cardString.length() == 2 || cardString.length() == 3) {
                char rankChar = cardString[0];
                char suitChar = cardString.back();

                // Check if the rank and suit characters are valid
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
                            validCardCount++;
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

        if (validCardCount != 5) {
            std::cerr << "Warning: Read " << validCardCount << " valid cards from the line, but expected 5." << std::endl;
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


// Function to determine the poker hand rank for a group of 5 cards
void determinePokerHandRank(const std::vector<Card>& cards) {
    // Check if the number of cards is a multiple of 5
    if (cards.size() % 5 != 0) {
        std::cerr << "Error: Invalid number of cards." << std::endl;
        return;
    }

    // Loop through groups of 5 cards
    for (auto it = cards.begin(); it != cards.end(); std::advance(it, 5)) {
        // Create a temporary vector to hold 5 cards at a time
        std::vector<Card> tempHand(it, it + 5);

        // Sort the temporary hand using the less than operator
        std::sort(tempHand.begin(), tempHand.end());

        // Determine poker hand rank
        bool isFlush = std::adjacent_find(tempHand.begin(), tempHand.end(), [](const Card& a, const Card& b) {
            return a.suit != b.suit;
        }) == tempHand.end();

        bool isStraight = std::adjacent_find(tempHand.begin(), tempHand.end(), [](const Card& a, const Card& b) {
            return static_cast<int>(a.rank) + 1 != static_cast<int>(b.rank);
        }) == tempHand.end();

        if (isFlush && isStraight) {
            std::cout << "Straight flush" << std::endl;
        } else if (std::adjacent_find(tempHand.begin(), tempHand.end(), [](const Card& a, const Card& b) {
            return a.rank == b.rank;
        }) != tempHand.end()) {
            std::cout << "One pair or more" << std::endl;
        } else {
            std::cout << "No rank" << std::endl;
        }
    }
}


// Constructor
Deck::Deck(const std::string& filename) {
    try {
        load(filename);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        throw; // Re-throw the exception
    }
}



// Load method to read cards from a file
void Deck::load(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw std::runtime_error("Error: Unable to open file: " + filename);
    }

    std::string line;

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
                                // Map rank to corresponding enumerations
                                // ...

                                case 'J': case 'j': rank = Rank::Jack; break;
                                case 'Q': case 'q': rank = Rank::Queen; break;
                                case 'K': case 'k': rank = Rank::King; break;
                                case 'A': case 'a': rank = Rank::Ace; break;
                            }
                            switch (suitChar) {
                                // Map suit to corresponding enumerations
                                // ...

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

    file.close();
}


// Shuffle method
void Deck::shuffle() {
    // Use the STL's shuffle algorithm with a random number generator
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

// Size method
std::size_t Deck::size() const {
    return cards.size();
}



// Non-member insertion operator
std::ostream& operator<<(std::ostream& os, const Deck& deck) {
    for (const auto& card : deck.cards) {
        // Print out valid card definition strings on separate lines
        // ...
    }
    return os;
}



//Hands
// Default constructor
Hand::Hand() {}

// Copy constructor
Hand::Hand(const Hand& other) : cards(other.cards) {}

// Assignment operator
Hand& Hand::operator=(const Hand& other) {
    if (this != &other) {
        cards = other.cards;
    }
    return *this;
}

// Size method
std::size_t Hand::size() const {
    return cards.size();
}

// Equivalence operator
bool Hand::operator==(const Hand& other) const {
    return cards == other.cards;
}

// Less than operator
bool Hand::operator<(const Hand& other) const {
    return std::lexicographical_compare(cards.begin(), cards.end(), other.cards.begin(), other.cards.end());
}


// "as string" method
std::string Hand::asString() const {
    std::ostringstream oss;
    for (const auto& card : cards) {
        // Convert Rank enum to an appropriate type (e.g., int) before using in the stream
        oss << static_cast<int>(card.rank) << static_cast<char>(card.suit) << ' ';
    }
    return oss.str();
}

// Non-member insertion operator for Hand
std::ostream& operator<<(std::ostream& os, const Hand& hand) {
    for (const auto& card : hand.cards) {
        os << static_cast<int>(card.rank) << static_cast<char>(card.suit) << ' ';
    }
    return os;
}

// // Implementation of operator<< for Deck
// std::ostream& operator<<(std::ostream& os, const Deck& deck) {
//     // Implement how you want to print the deck
//     // For example, iterate through cards in the deck and print each card
//     for (const auto& card : deck.getCards()) {
//         os << card.rank << static_cast<char>(card.suit) << ' ';
//     }
//     return os;
// }

// // Implementation of operator<< for Hand
// std::ostream& operator<<(std::ostream& os, const Hand& hand) {
//     // Implement how you want to print the hand
//     // For example, iterate through cards in the hand and print each card
//     for (const auto& card : hand.getCards()) {
//         os << card.rank << static_cast<char>(card.suit) << ' ';
//     }
//     return os;
// }


// // Non-member insertion operator for adding a card from a deck to a hand
// std::ostream& operator<<(std::ostream& os, Hand& hand, Deck& deck) {
//     if (!deck.isEmpty()) {
//         Card card = deck.popBack();
//         hand.cards.push_back(card);
//     }
//     return os;
// }


