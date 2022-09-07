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
    std::cout << "\nInteger to Decimal: " << FindDecimal(10) << "\n";
    std::cout << "Integer to Binary: " << FindBinary(10) << "\n";
    std::cout << "Integer to Hexadecimal: " << FindHex(10) << "\n";
    
    // Tests
    //std::cout << numberConverter(FindHex(10),16) << "\n";
    //std::cout << numberConverter(FindBinary(10),2) << "\n";
    //std::cout << numberConverter(FindDecimal(10),10) << "\n";
    return 0;
}