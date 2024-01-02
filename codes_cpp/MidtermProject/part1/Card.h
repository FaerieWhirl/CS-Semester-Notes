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

};
