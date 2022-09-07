//
//  BookAnalyzerFuncs.hpp
//  Book Analyzer
//
//  Created by Stuart Kirkham on 9/7/22.
//

#pragma once
#define BookAnalyzerFuncs_hpp
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

void bookTitle(std::vector<std::string>allWords);
void bookAuthor(std::vector<std::string>allWords);
void numWords(std::vector<std::string>allWords);
int numChars (std::vector<std::string> allWords);
std::string shortWord(std::vector<std::string> allWords);
std::string longWord(std::vector<std::string> allWords);
void keyCount ( std::vector<std::string> allWords, std::string keyWord);
