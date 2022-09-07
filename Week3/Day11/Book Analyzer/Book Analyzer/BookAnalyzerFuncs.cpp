//
//  BookAnalyzerFuncs.cpp
//  Book Analyzer
//
//  Created by Stuart Kirkham on 9/7/22.
//

#include "BookAnalyzerFuncs.hpp"
//The title of the book
void bookTitle(std::vector<std::string>allWords) {
    // this searches for the word title: if not found, prints unknown.
    auto titleFound = find(allWords.begin(), allWords.end(), "Title:");
    int indexTitle = titleFound - allWords.begin();
    if (titleFound == allWords.end()){
        std::cout << "unknown ";
        return;
    }
    //std::cout << indexTitle;
    // this searches for the word Author:
    auto authorFound = find(allWords.begin(), allWords.end(), "Author:");
    int indexAuthor = authorFound - allWords.begin();
    //std::cout << indexAuthor;
    for (int i = indexTitle + 1; i < indexAuthor; i++) {
        std::cout << allWords[i] << " ";
    }
}
//The author of the book
void bookAuthor(std::vector<std::string>allWords){
    auto authorFound = find(allWords.begin(), allWords.end(), "Author:");
    if (authorFound == allWords.end()){
        std::cout << "unknown";
        return;
    }
    int indexAuthor = authorFound - allWords.begin();
    //std::cout << indexTitle;
    auto referenceFound = find(allWords.begin(), allWords.end(), "Release");
    int indexReference = referenceFound - allWords.begin();
    //std::cout << indexAuthor;
    for (int i = indexAuthor + 1; i < indexReference; i++) {
        std::cout<<allWords[i] << " ";
    }
}
//The total number of words in the file
void numWords(std::vector<std::string>allWords){
    std::cout << allWords.size() << "\n";
}
//The total number of characters in the file (excluding whitespace).
int numChars (std::vector<std::string> allWords){
    int totalChars = 0;
    for (int i = 0; i < allWords.size(); i++){
        totalChars = totalChars + allWords[i].length();
    }
    return totalChars;
}
//The shortest word in the book
std::string shortWord(std::vector<std::string> allWords){
    std::string shortestWord = allWords[0];
    for (std::string word : allWords){
        if (word.length() < shortestWord.length()){
            shortestWord = word;
        }
    }
    return shortestWord;
}
//The longest word in the book
std::string longWord(std::vector<std::string> allWords){
    std::string longestWord = allWords[0];
    for (std::string word : allWords){
        if (word.length() > longestWord.length()){
            longestWord = word;
        }
    }
    return longestWord;
}
//The number of appearances, and locations of, the users key word (see below)
void keyCount ( std::vector<std::string> allWords, std::string keyWord){
    int key = 0;
    double location = 0;
    for (int i = 0; i < allWords.size(); i++){
        if (keyWord == allWords[i]){
            key = key+1;
        }
    }
    std::cout << "the word \"" << keyWord << "\" was entered " << key << " times: \n";
    std::string beforeWord = "";
    std::string afterWord = "";
    // this for loop checks whether the key word is the last or first word in the book; if so, it only prints one word before or after.
    for (int i = 0; i < allWords.size(); i++){
        if (keyWord == allWords[i]){
            if (i == 0){
                beforeWord = "";
            }
            else {
                beforeWord = allWords[i-1];
            }
            if (i == allWords.size()-1){
                afterWord = "";
            }
            else {
                afterWord = allWords[i+1];
            }
            std::cout << "at " << int ((location/numChars(allWords))*100) <<"%: " << beforeWord <<" " <<  allWords[i] << " " << afterWord << "\n";
            beforeWord = "";
            afterWord = "";
        }
        location = location + allWords[i].length();
    }
}
