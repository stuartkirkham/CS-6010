//
//  main.cpp
//  Cards
//
//  Created by Stuart Kirkham and Josh Adams
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
// structure creating a playing card
struct PlayingCard {
    int rank; // 1,2,3,4,5,6,7,8,9,10,11,12,13
    char suit; // H , D, S, C
};
vector<PlayingCard> Deck(){
    vector<PlayingCard> fullDeck;
    vector<char> suits{'H','D','S','C'};
    //this loop assigns ranks and suits to each card.
    for(char suit : suits){
        for (int i = 1; i<14; i++){
            PlayingCard newCard = {i, suit};
            fullDeck.push_back(newCard);
        }
    }
    return fullDeck;
}
// this function shuffles the deck.
void ShuffleDeck(vector<PlayingCard>& deckShuffle){
    for (int i = 52; i > 0; i--){
        int j = rand() % 52;
        std::swap(deckShuffle[i], deckShuffle[j]);
    }
}

//test deck
vector <PlayingCard>DrawHand(const vector<PlayingCard>& hand){
    vector<PlayingCard> yourHand;
    //cout << "Your hand is: ";
    for (int i = 0; i <5; i++){
        PlayingCard newHand = {hand[i].rank, hand[i].suit};
        yourHand.push_back(newHand);
    }

    return yourHand;
}

//function that checks whether the hand is a flush.
bool isFlush(vector<PlayingCard>& hand){
    for (int i = 0; i <4; i++){
        if (hand[i].suit != hand[i+1].suit){
            return false;
        }
    }
    return true;
}

//function that checks whether the hand is a straight.
bool isStraight(vector<PlayingCard>& hand){
    for (int i = 0; i <4; i++){
        if (hand[i].rank >= hand[i+1].rank){
            return false;
        }
    }
    return true;
}

void PrintDeck(const vector<PlayingCard>& deckPrint) {
    //cout<< deckPrint.size() << "\n";
    for(PlayingCard card : deckPrint){
        if (card.rank == 1){
            cout << "Card Rank: A " << "Card Suit: " << card.suit << "\n";
        }
        else if (card.rank == 11){
            cout << "Card Rank: J " << "Card Suit: " << card.suit << "\n";
        }
        else if (card.rank == 12){
            cout << "Card Rank: Q " << "Card Suit: " << card.suit << "\n";
        }
        else if (card.rank == 13){
            cout << "Card Rank: K " << "Card Suit: " << card.suit << "\n";
        }
        else {
            cout << "Card Rank: " << card.rank << " Card Suit: " << card.suit << "\n";
        }
    }
}
int main() {
    srand(time(NULL));
    vector<PlayingCard> deckInfo = Deck();
    //PrintDeck(deckInfo);
    //ShuffleDeck(deckInfo);
    //PrintDeck(deckInfo);
    vector<PlayingCard> yourHand = DrawHand(deckInfo);
    
    int flushHand = isFlush(deckInfo);
    int straightHand = isStraight(deckInfo);
    cout << flushHand << " " << straightHand;
    return 0;
}

