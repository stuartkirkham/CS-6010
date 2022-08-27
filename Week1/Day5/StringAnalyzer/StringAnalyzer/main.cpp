//
//  main.cpp
//  StringAnalyzer homework
//  Created by Stuart Kirkham on 8/26/22.
//

#include <iostream>
#include <string>
bool IsTerminator(char terminatorCounter) {
    //The bool isTerminator helps to determine how many sentences there are.
    //Returns whether or not the character is ., ?, or !.
    char periodCounter = '.';
    char questionCounter = '?';
    char exclamationCounter = '!';
    if (terminatorCounter == periodCounter) {
        return true;
    }
    else if (terminatorCounter == questionCounter) {
        return true;
    }
    else if (terminatorCounter == exclamationCounter) {
        return true;
    }
    else {
        return false;
    }
}
/*
bool IsPunctuation(char punctuationCounter) {
    //The bool isPunctuation helps to not count those punctuation marks as a part of the letter count. Because commas aren't letters, but they're also not terminators of sentences.
    //Returns whether or not the character is ., ?, !, or ,.
}
bool IsVowel(char vowelChecker) {
    // Returns whether or not the character is a vowel. For our purposes, always treat the character 'y' (and its uppercase version) as a vowel.
}
bool IsConsonant(char consonantChecker) {
    //Returns whether or not the character is a consonant.
}
int NumWords(std::string wordCounter) {
    //Returns the number of words in the string.
}
int NumSentences(std::string sentenceCounter) {
    //Returns the number of sentences in the string. This function can make use of the IsPunctuation helper.
}
int NumVowels(std::string vowelCounter) {
    //Returns the number of vowels in the string. This function can make use of the IsVowel helper.
}
int NumConsonants(std::string consonantCounter) {
    // Returns the number of consonants in the string. This function can make use of the IsConsonant helper.
}
double AverageWordLength(std::string wordLength) {
    //Returns the average length of all words in the string. This function can make use of the IsVowel , IsConsonant , and NumWords helpers.
}
double AverageVowelsPerWord(std::string vowelCounterPerWord) {
    // Returns the average number of vowels per word in the string. This function can make use of the IsVowel and NumWords helpers.
}
*/
int main() {
    // This is  a tool that analyzes sentences and reports various statistics about them.
    // global variable section
    int punctuationTotal = 0;
    int vowelTotal = 0;
    int spaceTotal = 0;
    int consonantTotal = 0;
    //
    std::cout << "Enter a string containing one or more sentences: \n";
    std::string input;
    std::getline( std::cin, input );
    std::cout << input << "\n";
    if (input == "done") {
        std::cout << "Goodbye.";
    }
    else {
        for (int i = 0; i<input.length(); i++) {
            //std::cout << input[i];
            if (IsTerminator(input[i])) {
                punctuationTotal=punctuationTotal+1;
            }
        }
    }
    
    return 0;
}
