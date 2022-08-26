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
    if (terminatorCounter == "."){
        return 1;
    }
    else if (terminatorCounter == "?"){
        
    }
    else if (terminatorCounter == "!"){
        
    }
    else {
        return 0;
    }
}
bool IsPunctuation(char c) {
    //The bool isPunctuation helps to not count those punctuation marks as a part of the letter count. Because commas aren't letters, but they're also not terminators of sentences.
    //Returns whether or not the character is ., ?, !, or ,.
}
bool IsVowel(char c) {
    // Returns whether or not the character is a vowel. For our purposes, always treat the character 'y' (and its uppercase version) as a vowel.
}
bool IsConsonant(char c) {
    //Returns whether or not the character is a consonant.
}
int NumWords(std::string s) {
    //Returns the number of words in the string.
}
int NumSentences(std::string s) {
    //Returns the number of sentences in the string. This function can make use of the IsPunctuation helper.
}
int NumVowels(std::string s) {
    //Returns the number of vowels in the string. This function can make use of the IsVowel helper.
}
int NumConsonants(std::string s) {
    // Returns the number of consonants in the string. This function can make use of the IsConsonant helper.
}
double AverageWordLength(std::string s) {
    //Returns the average length of all words in the string. This function can make use of the IsVowel , IsConsonant , and NumWords helpers.
}
double AverageVowelsPerWord(std::string s) {
    // Returns the average number of vowels per word in the string. This function can make use of the IsVowel and NumWords helpers.
}
int main() {
    // This is  a tool that analyzes sentences and reports various statistics about them.
    std::cout << "Enter a string containing one or more sentences: \n";
    std::string input;
    std::getline( std::cin, input );
    std::cout << input << "\n";
    if (input == "done") {
        std::cout << "Goodbye.";
    }
    else {
        
    }
    
    return 0;
}
