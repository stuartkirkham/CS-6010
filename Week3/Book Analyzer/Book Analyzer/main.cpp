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
    
    //std::cout << indexTitle;
    auto authorFound = find(allWords.begin(), allWords.end(), "Author:");
    int indexAuthor = authorFound - allWords.begin();
    //std::cout << indexAuthor;
    for (int i = indexTitle + 1; i < indexAuthor; i++) {
        std::cout<<allWords[i] << " ";
    }
    std::cout << "\n";
}
//The author of the book
void bookAuthor(std::vector<std::string>allWords){
    auto authorFound = find(allWords.begin(), allWords.end(), "Author:");
    int indexAuthor = authorFound - allWords.begin();
    //std::cout << indexTitle;
    auto referenceFound = find(allWords.begin(), allWords.end(), "Release");
    int indexReference = referenceFound - allWords.begin();
    //std::cout << indexAuthor;
    for (int i = indexAuthor + 1; i < indexReference; i++) {
        std::cout<<allWords[i] << " ";
    }
    std::cout << "\n";
}
//The total number of words in the file
void numWords(std::vector<std::string>allWords){
    std::cout << allWords.size() << "\n";
}
//The total number of characters in the file (excluding whitespace).
void numChars (std::vector<std::string> allWords){
    int totalChars = 0;
    for (int i = 0; i < allWords.size(); i++){
        totalChars = totalChars + allWords[i].length();
    }
    std::cout << totalChars << "\n";
}
//The shortest word in the book
//The longest word in the book
//The number of appearances, and locations of, the users key word (see below)

int main(int argc, const char * argv[]) {
    std::string title = "Title: ";
    std::string author ="Author: ";
    std::string releaseDate = "Release Date: ";
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
    std::ifstream fin ("Testing.txt");
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
    std::cout << "Title: ";
    bookTitle(allWords);
    std::cout << "Author: ";
    bookAuthor(allWords);
    std::cout <<"Number of words: ";
    numWords(allWords);
    std::cout <<"Number of characters: ";
    numChars(allWords);
    return 0;
}
