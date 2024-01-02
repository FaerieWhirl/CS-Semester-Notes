// Card.h
#pragma once

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
