//
//  WordHelper.cpp
//  StringAnalyzer
//
//  Created by Stuart Kirkham on 8/29/22.
//
#include <iostream>
#include <string>
#include "LetterHelpers.hpp"
#include "WordHelper.hpp"
// global variable section


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
double AverageWordLength(std::string sentence) {
    //Returns the average length of all words in the string. This function can make use of the IsVowel , IsConsonant , and NumWords helpers.
    int consonantTotal = NumConsonants(sentence);
    int    vowelTotal = NumVowels( sentence );
    double averageCounter;
    averageCounter = (vowelTotal+consonantTotal)/double (NumWords(sentence));
    return (averageCounter);
}
double AverageVowelsPerWord( std::string sentence ) {
    // Returns the average number of vowels per word in the string. This function can make use of the IsVowel and NumWords helpers.
        // double averageVowelCounter;
    
    int    vowelTotal = NumVowels( sentence );
    double numWords = NumWords( sentence ); // using double so div below works...
    
    // double averageVowelCounter = (vowelTotal / double(NumWords(sentence)));
    return vowelTotal / numWords;
    // return averageVowelCounter;
}
