#include <iostream>
#include <vector>
#include "Card.h" 
#include "Card.cpp" 

int main() {
    // ... (code to read cards from the file into the vector)
    std::vector<Card> cards;

    parseRichCardFile(cards, "hands.txt");


    // Print poker hand rank for each group of five cards
    determinePokerHandRank(cards);

    // Sort the entire vector using the less than operator
    std::sort(cards.begin(), cards.end());

    // Print out the cards in sorted order
    std::cout << "Sorted Cards:" << std::endl;
    for (const auto& card : cards) {
        char rankChar;
        switch (card.rank) {
            case Rank::Two: rankChar = '2'; break;
            case Rank::Three: rankChar = '3'; break;
            case Rank::Four: rankChar = '4'; break;
            case Rank::Five: rankChar = '5'; break;
            case Rank::Six: rankChar = '6'; break;
            case Rank::Seven: rankChar = '7'; break;
            case Rank::Eight: rankChar = '8'; break;
            case Rank::Nine: rankChar = '9'; break;
            case Rank::Ten: rankChar = '0'; break; // for rank 10
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

    return 0;
}
