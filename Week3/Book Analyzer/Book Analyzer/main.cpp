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
void bookTitle(std::vector<std::string>allWords){
    std::string title;
    auto findTitle = find(allWords.begin(), allWords.end(), "Title:");
    if (findTitle == "Title:") {
        std::cout << title.substr(0,title.find("Author:")) << "\n";
    }
    std::cout << title.substr(0,title.find("Author")) << "\n";
}
//The author of the book
void bookAuthor(std::vector<std::string>allWords){
    
}
//The total number of words in the file
//The total number of characters in the file (excluding whitespace).
//The shortest word in the book
//The longest word in the book
//The number of appearances, and locations of, the users key word (see below)

int main(int argc, const char * argv[]) {
    // Write a program to read in a book from file,
    // compute the statistics defined below,
    // and output the results to the terminal.
   
    /*std::ofstream fout ("Testing.txt");
    fout <<"Hello world! \n";
    fout.flush(); // forces to write to file
    fout.close();

    fout.open("Testing.txt", std::ios_base::app);
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





    return 0;
}
