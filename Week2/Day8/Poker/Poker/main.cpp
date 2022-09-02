
//
//  main.cpp
//  Cards
//
//  Created by Stuart Kirkham on 8/30/22.
//Joshua Adams, Stuart Kirkham

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
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
void ShuffleDeck(vector<PlayingCard>& deckShuffle) //this function shuffles the deck
{
    for (int i = 52; i > 0; i--)
    {
        int j = rand() % 52;
        swap(deckShuffle[i], deckShuffle[j]);
        
    }
}
//int GetSecondaryValue(PlayingCard card)
//{
//    if (card.rank == 1)
//    {
//        return 14;
//    }
//    return card.rank;
//}

bool CardComp( PlayingCard card1,  PlayingCard card2)
{
    return card1.rank < card2.rank;
}
vector<PlayingCard> DrawHand( vector<PlayingCard>& deck)
{
    vector<PlayingCard> yourHand;
    for (int i = 0; i < 5; i++)
    {
        PlayingCard newHand = {deck[i].rank, deck[i].suit};
        yourHand.push_back(newHand);
    }
    sort(yourHand.begin(), yourHand.end(), CardComp);

    return yourHand;
}


bool IsFlush(vector<PlayingCard> hand)
{
    for (int i = 0; i < hand.size() - 1; i++)
    {
        if (hand[i].suit != hand[i+1].suit)
        {
            return false;
        }
    }
    return true;
}



bool IsStraight(vector<PlayingCard> hand)
{
    for (int i = 0; i < hand.size() - 1; i++)
    {
        
        if (hand[i].rank + 1 != hand[i+1].rank)
        {
            if (i != 0 || hand[i].rank != 1 || hand.back().rank != 13)
            {
                return false;
            }
        }
        
    }
    return true;
}

bool IsStraightFlush(vector<PlayingCard> hand)
{
    return IsStraight(hand) && IsFlush(hand);
}

bool IsRoyalFlush(vector<PlayingCard> hand)
{
    if (hand.front().rank == 1 && hand.back().rank == 13)
    {
        return IsStraightFlush(hand);
    }
    return false;
}
bool IsFullHouse(vector<PlayingCard> hand)
{
    int rank1 = hand.front().rank;
    int rank2 = hand.back().rank;
    int rank1Count = 0;
    int rank2Count = 0;
    for(int i = 0; i < hand.size(); i++)
    {
        if(hand[i].rank == rank1)
        {
            rank1Count += 1;
        }
        else if(hand[i].rank == rank2)
        {
            rank2Count += 1;
        }
    }
    return (rank1Count == 3 && rank2Count == 2 ) || (rank2Count == 3 && rank1Count == 2);
  
}


int main() {
    vector<PlayingCard> deckInfo = Deck();
    srand(time(NULL));
    int numFlush = 0;
    int numStraight = 0;
    int numStraightFlush = 0;
    int numRoyalFlush = 0;
    int numFullHouse = 0;
    for (int i = 0; i < 1000000; i++){
        ShuffleDeck(deckInfo);
        vector<PlayingCard>yourHand = DrawHand(deckInfo);
        bool isFlush = IsFlush(yourHand);
        if (isFlush){
            numFlush = numFlush + 1;
        }
        bool isStraight = IsStraight(yourHand);
        if (isStraight){
            numStraight = numStraight + 1;
        }
        bool isStraightFlush = IsStraightFlush(yourHand);
        if (isStraightFlush){
            numStraightFlush = numStraightFlush + 1;
        }
        bool isRoyalFlush = IsRoyalFlush(yourHand);
        if (isRoyalFlush){
            numRoyalFlush = numRoyalFlush + 1;
        }
        bool isFullHouse = IsFullHouse(yourHand);
        if (isFullHouse){
            numFullHouse = numFullHouse + 1;
        }
    }
    /*
     Num of Flushes: 1785
     Num of Straights: 3779
     Num of Straight Flushes: 12
     Num of Royal Flushes: 1
     Num of Full Houses: 1545
    */
    cout <<"Num of Flushes: " << numFlush << "\n";
    cout <<"Num of Straights: " << numStraight << "\n";
    cout <<"Num of Straight Flushes: " << numStraightFlush << "\n";
    cout <<"Num of Royal Flushes: " << numRoyalFlush << "\n";
    cout <<"Num of Full Houses: " << numFullHouse << "\n";
    
    
    
    
    
    return 0;
     
}
