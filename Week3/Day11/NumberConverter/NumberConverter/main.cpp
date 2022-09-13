//
//  main.cpp
//  NumberConverter
//
//  Created by Stuart Kirkham and Josh Adams on 9/6/22.
//

#include <iostream>
#include <string>
#include <cstring>
#include "NumberConverterFuncs.hpp"
//Part 1
//First we'll write a function that takes a string of digits and the base that number uses, and returns its value as an int. For example:
int main(int argc, const char * argv[]) {
    // Ask the user for a number and its base.
    std::cout << "Please enter a string of digits and the base that number uses. (ex. 99, 10) \n";
    // assign user input to strings.
    std::string value1;
    std::cin >> value1;
    int value2;
    std::cin >> value2;
    numberConverter(value1, value2);
    
    //part 2
    int userInput;
        cout << "\nplease enter an integer." << endl;
        cin >> userInput;
        std::cout << "\n";
        string decRep = FindDecimal(userInput);
        cout << "Decimal: " << decRep << endl;
        string binRep = FindBinary(userInput);
        cout << "Binary: " << binRep << endl;
        string hexRep = FindHex(userInput);
        cout << "Hex: " << hexRep << endl;
    
    // Tests
    std::cout << numberConverter(FindDecimal(14),2) << "\n";
    //std::cout << numberConverter("10",10);
    //std::cout << numberConverter(FindBinary(10),2) << "\n";
    //std::cout << numberConverter(FindHex(10),16) << "\n";
    return 0;
}
