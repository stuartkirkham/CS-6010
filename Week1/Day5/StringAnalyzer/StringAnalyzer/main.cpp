//
//  main.cpp
//  StringAnalyzer homework
//  Created by Stuart Kirkham on 8/26/22.
//
#include <iostream>
#include <string>
#include "WordHelper.hpp"
#include "LetterHelpers.hpp"
// global variable section
int punctuationTotal = 0;
int vowelTotal = 0;
int consonantTotal = 0;

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
