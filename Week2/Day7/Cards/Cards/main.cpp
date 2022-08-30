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
struct PlayingCard {
    int rank; // 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
    string rankName; // 1,2,3,4,5,6,7,8,9,10,J,Q,K,A
    char suit; // H , D, S, C
};
std::vector<PlayingCard> Deck(std::vector<PlayingCard> deckList){
    std::vector<PlayingCard> fullDeck;
    
    
    return fullDeck;
}
void PrintDeck(std::vector<PlayingCard> deckList) {
    std::vector<PlayingCard> dl = Deck(deckList);
    for (PlayingCard dl : deckList){
        cout << "Card Rank: " << dl.rank << "\n";
        cout << "Card Name: " << dl.rankName << "\n";
        cout << "Card Suit: " << dl.suit << "\n";
    }
}
int main() {
    std::vector<PlayingCard> deckList;
    PlayingCard h1 =  {1,"1",'H'};
    PlayingCard h2 =  {2,"2",'H'};
    PlayingCard h3 =  {3,"3",'H'};
    PlayingCard h4 =  {4,"4",'H'};
    PlayingCard h5 =  {5,"5",'H'};
    PlayingCard h6 =  {6,"6",'H'};
    PlayingCard h7 =  {7,"7",'H'};
    PlayingCard h8 =  {8,"8",'H'};
    PlayingCard h9 =  {9,"9",'H'};
    PlayingCard h10 =  {10,"10",'H'};
    PlayingCard hJ =  {11,"J",'H'};
    PlayingCard hQ =  {12,"Q",'H'};
    PlayingCard hK =  {13,"K",'H'};
    PlayingCard hA =  {14,"A",'H'};

                      
    

    return 0;
}
