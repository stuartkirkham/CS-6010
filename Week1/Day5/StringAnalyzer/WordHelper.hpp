//
//  WordHelper.hpp
//  StringAnalyzer
//
//  Created by Stuart Kirkham on 8/29/22.
//

#pragma once

#include <stdio.h>

int NumWords(std::string wordCounter);
int NumSentences(std::string sentenceCounter);
int NumVowels(std::string vowelCounter);
int NumConsonants(std::string consonantCounter);
double AverageWordLength(std::string wordLength);
double AverageVowelsPerWord(std::string vowelCounterPerWord);
