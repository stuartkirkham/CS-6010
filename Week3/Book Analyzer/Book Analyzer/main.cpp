//
//  main.cpp
//  Book Analyzer
//
//  Created by Stuart Kirkham on 9/2/22.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

//The title of the book
void bookTitle(std::vector<std::string>allWords) {
    auto titleFound = find(allWords.begin(), allWords.end(), "Title:");
    int indexTitle = titleFound - allWords.begin();
    if (titleFound == allWords.end()){
        std::cout << "unknown ";
        return;
    }
    //std::cout << indexTitle;
    auto authorFound = find(allWords.begin(), allWords.end(), "Author:");
    int indexAuthor = authorFound - allWords.begin();
    //std::cout << indexAuthor;
    for (int i = indexTitle + 1; i < indexAuthor; i++) {
        std::cout<<allWords[i] << " ";
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

int main(int argc, const char * argv[]) {
    std::string title = "Title: ";
    std::string author ="Author: ";
    std::string releaseDate = "Release Date: ";
    
    std::ifstream fin (argv[1]);
    std::string keyWord = argv[2];
    // Write a program to read in a book from file,
    // compute the statistics defined below,
    // and output the results to the terminal.
   
    /* std::ofstream fout ("Testing.txt");
    fout <<"Hello world! \n";
    fout.flush(); // forces to write to file
    fout.close();

    fout.open("Test.txt", std::ios_base::app);
    fout << "A second line for fun \n";
    fout.flush();
    fout.close();
    */
    //this is how you open and read from a file:
    //std::ifstream fin ("Test.txt");
    //std::string keyWord = "Hello";
    //std::cin << keyWord;
    if (fin.fail()){
        std::cout << "Nonexistent file! \n";
        system("PAUSE");
        return 0;
    }
    // this creates a vector of words.
    std::string singleWord;
    std::vector<std::string> allWords;
    while (fin >> singleWord) {
        allWords.push_back(singleWord);
    }
    std::cout << "Statistics for ";
    bookTitle(allWords);
    std::cout << "by ";
    bookAuthor(allWords);
    std::cout <<": \n";
    std::cout <<"Number of words: ";
    numWords(allWords);
    std::cout <<"Number of characters: ";
    std::cout << numChars(allWords) << "\n";
    std::cout <<"The shortest word is \"" << shortWord(allWords);
    std::cout << "\", and the longest word is \"" << longWord(allWords) << "\"\n";
    std::cout <<"\n";
    keyCount(allWords,keyWord);
    
    return 0;
}
