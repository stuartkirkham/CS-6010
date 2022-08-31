//
//  LetterHelpers.cpp
//  StringAnalyzer
//
//  Created by Stuart Kirkham on 8/29/22.
//

#include "LetterHelpers.hpp"
#include <iostream>
#include <string>
bool IsTerminator(char terminatorCounter) {
    //The bool isTerminator helps to determine how many sentences there are.
    //Returns whether or not the character is ., ?, or !.
    std::string terminatorString = ".?!";
    // Searches for terminator punctuation.
    if (terminatorString.find(terminatorCounter)!= std::string::npos) {
        return true;
    }
    else {
        return false;
    }
}
bool IsPunctuation(char punctuationCounter) {
    //The bool isPunctuation helps to not count those punctuation marks as a part of the letter count. Because commas aren't letters, but they're also not terminators of sentences.
    //Returns whether or not the character is ., ?, !, or ,.
    std::string punctuationString = ".?!,";
    // This if statement searches for punctuation and returns true if found.
     if (punctuationString.find(punctuationCounter)!= std::string::npos) {
         return true;
     }
     else {
         return false;
     }
}
// space counter.
bool IsSpace(char spaceChecker) {
    char spaceCounter = ' ';
    if (spaceChecker == spaceCounter){
        return true;
    }
    else {
        return false;
    }
}
bool IsVowel(char vowelChecker) {
    // Returns whether or not the character is a vowel, including Y.
    std::string vowelString = "AaEeIiOoUuYy";
    if (vowelString.find(vowelChecker)!= std::string::npos) {
        return true;
    }
    else {
        return false;
    }
}
bool IsConsonant(char consonantChecker) {
    //Returns whether or not the character is a consonant.
    if (!IsVowel(consonantChecker) && !IsPunctuation(consonantChecker) && !IsSpace(consonantChecker)) {
        return true;
    }
    else {
        return false;
    }
}
