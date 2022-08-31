//
//  main.cpp
//  Cards
//
//  Created by Stuart Kirkham on 8/30/22.
//

#include <iostream>
#include <string>
#include <vector>
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
void PrintDeck(vector<PlayingCard> deckPrint) {
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
    vector<PlayingCard> deckInfo = Deck();
    PrintDeck(deckInfo);
    return 0;
}
