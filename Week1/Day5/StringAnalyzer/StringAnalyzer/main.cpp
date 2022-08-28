//
//  main.cpp
//  StringAnalyzer homework
//  Created by Stuart Kirkham on 8/26/22.
//
#include <iostream>
#include <string>
// global variable section
int punctuationTotal = 0;
int vowelTotal = 0;
int consonantTotal = 0;
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
    // Returns whether or not the character is a vowel. For our purposes, always treat the character 'y' (and its uppercase version) as a vowel.
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
int NumWords(std::string wordCounter) {
    //Returns the number of words in the string.
    int words = 1;
    for (int i = 0; i < wordCounter.length(); i++) {
        if (IsSpace(wordCounter[i])) {
            words =  words + 1;
        }
    }
    return (words);
}
int NumSentences(std::string sentenceCounter) {
    //Returns the number of sentences in the string. This function can make use of the IsPunctuation helper.
    int numberOfSentences = 0;
    for (int i = 0; i < sentenceCounter.length(); i++) {
        if (IsTerminator(sentenceCounter[i])) {
            numberOfSentences =  numberOfSentences + 1;
        }
    }
    return (numberOfSentences);
}
int NumVowels(std::string vowelCounter) {
    //Returns the number of vowels in the string. This function can make use of the IsVowel helper.
    int numberOfVowels = 0;
    for (int i = 0; i < vowelCounter.length(); i++) {
        if (IsVowel(vowelCounter[i])) {
            numberOfVowels =  numberOfVowels + 1;
        }
    }
    //std::cout << numberOfVowels;
    return (numberOfVowels);
}
int NumConsonants(std::string consonantCounter) {
    // Returns the number of consonants in the string. This function can make use of the IsConsonant helper.
    int numberOfConsonants = 0;
    for (int i = 0; i < consonantCounter.length(); i++) {
        if (IsConsonant(consonantCounter[i])) {
            numberOfConsonants =  numberOfConsonants + 1;
        }
    }
    //std::cout << numberOfVowels;
    return (numberOfConsonants);
}
double AverageWordLength(std::string wordLength) {
    //Returns the average length of all words in the string. This function can make use of the IsVowel , IsConsonant , and NumWords helpers.
    double averageCounter;
    averageCounter = (vowelTotal+consonantTotal)/double (NumWords(wordLength));
    return (averageCounter);
}
double AverageVowelsPerWord(std::string vowelCounterPerWord) {
    // Returns the average number of vowels per word in the string. This function can make use of the IsVowel and NumWords helpers.
    double averageVowelCounter;
    averageVowelCounter = (vowelTotal/double (NumWords(vowelCounterPerWord)));
    return (averageVowelCounter);
}

int main() {
    // This is  a tool that analyzes sentences and reports various statistics about them.
    std::string input;
    std::cout << "Enter a string containing one or more sentences: \n";
    std::getline( std::cin,input);
    while (input != "done") {
        // resetting global variables
        punctuationTotal = 0;
        vowelTotal = 0;
        consonantTotal = 0;
        for (int i = 0; i<input.length(); i++) {
            //std::cout << input[i] << "\n"; testing string
            if (IsTerminator(input[i])) {
                punctuationTotal=punctuationTotal+1;
            }
        }
        for (int i = 0; i<input.length(); i++) {
            //std::cout << input[i] << "\n"; testing string
            if (IsVowel(input[i])) {
                vowelTotal=vowelTotal+1;
            }
        }
        for (int i = 0; i<input.length(); i++) {
            //std::cout << input[i] << "\n"; testing string
            if (IsConsonant(input[i])) {
                consonantTotal=consonantTotal+1;
            }
        }
        // std::cout << vowelTotal << "\n"; // test for vowel number
        // std::cout << consonantTotal << "\n"; //test for consonant number
        std::cout << "Analysis: \n";
        std::cout << "Number of words: " << NumWords(input) << "\n";
        std::cout << "Number of sentences: " << NumSentences(input) << "\n";
        std::cout << "Number of vowels: " << NumVowels(input) << "\n";
        std::cout << "Number of consonants: " << NumConsonants(input) << "\n";
        std::cout << "Reading level (average word length): " << AverageWordLength(input) << "\n";
        std::cout << "Average vowels per word: " << AverageVowelsPerWord(input) << "\n";
        std::cout << "\n";
        // continue looping until user types "done"
        
        std::cout << "Enter a string containing one or more sentences: \n";
        std::getline( std::cin,input);
    }
    std::cout << "Goodbye.\n";
    
    return 0;
}
