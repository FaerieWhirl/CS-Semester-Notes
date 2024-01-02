// Card.h
#pragma once

#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <random>


// Enumeration for different suits
enum class Suit { Clubs, Diamonds, Hearts, Spades };

// Enumeration for different ranks
enum class Rank {
    Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
    Jack, Queen, King, Ace
};

// Struct to represent a playing card
struct Card {
    Suit suit;
    Rank rank;

     // Less than operator for ordering cards by rank and then by suit
    bool operator<(const Card& other) const {
        // First compare ranks
        if (rank != other.rank) {
            return rank < other.rank;
        }

        // If ranks are equal, compare suits
        return suit < other.suit;
    }
};


class Deck {
private:
    std::vector<Card> cards;

    // Load method to read cards from a file
    void load(const std::string& filename);

public:
    
    // Constructor
    Deck(const std::string& filename);

    // Destructor (use the compiler-supplied destructor)
    Deck(const Deck& other) = default;

    // Shuffle method
    void shuffle();

    // Size method
    std::size_t size() const;

    // Friend declaration for non-member insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Deck& deck);

    // Assuming isEmpty and popBack are declared in the Deck class
    bool isEmpty();
    Card popBack();

};



class Hand {
public:
    // Default constructor
    Hand();

    // Copy constructor
    Hand(const Hand& other);

    // Destructor (you can use the default destructor here)

    // Assignment operator
    Hand& operator=(const Hand& other);

    // Size method
    std::size_t size() const;

    // Equivalence operator
    bool operator==(const Hand& other) const;

    // Less than operator
    bool operator<(const Hand& other) const;

    // "as string" method
    std::string asString() const;

    // Friend declaration for non-member insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Hand& hand);

    // Non-member insertion operator to add a card from the deck to the hand
    friend void operator<<(Hand& hand, Deck& deck);

    

    

private:
    std::vector<Card> cards;

    // Helper function to keep cards in sorted order
    void insertInOrder(const Card& card);

};


// Non-member insertion operator for adding a card from a deck to a hand
// std::ostream& operator<<(std::ostream& os, Hand& hand, Deck& deck);



