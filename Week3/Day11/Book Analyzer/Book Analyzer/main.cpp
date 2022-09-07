//
//  main.cpp
//  Book Analyzer
//
//  Created by Stuart Kirkham on 9/2/22.
//
#include "BookAnalyzerFuncs.hpp"

int main(int argc, const char * argv[]) {
    //std::string title = "Title: ";
    //std::string author ="Author: ";
    //std::string releaseDate = "Release Date: ";
    
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
    
    // this outputs if the file isnt in directory.
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
    //output
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
