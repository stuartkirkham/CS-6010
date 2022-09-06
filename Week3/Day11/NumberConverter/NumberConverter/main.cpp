//
//  main.cpp
//  NumberConverter
//
//  Created by Stuart Kirkham and Josh Adams on 9/6/22.
//

#include <iostream>
#include <string>
#include <cstring>

//Part 1
//First we'll write a function that takes a string of digits and the base that number uses, and returns its value as an int. For example:
void numberConverter (std::string value1, std::string value2){
    int stringToInt = 0;
    //converts string to int.
    if (value2 == "10"){
        int stringToInt = stoi(value1, 0, 10);
        std::cout << "Integer value: " << stringToInt << "\n";
    }
    //converts binary to integer.
    else if (value2 == "2"){
        int stringToInt = stoi(value1, 0, 2);
        std::cout << "Integer value: " << stringToInt << "\n";
        }
    //converts hexadecimal to integer.
    else if (value2 == "16") {
        int stringToInt = stoi(value1, 0, 16);
        std::cout << "Integer value: " << stringToInt << "\n";
    }
    // this outputs if the base number entered isnt decimal, binary or hexadecimal. tests for valid base input
    else {
        std::cout << "Invalid base.";
    }
}
int main(int argc, const char * argv[]) {
    // Ask the user for a number and its base.
    std::cout << "Please enter a string of digits and the base that number uses. (ex. 99, 10) \n";
    // assign user input to strings.
    std::string value1;
    std::cin >> value1;
    std::string value2;
    std::cin >> value2;
    numberConverter(value1,value2);
    return 0;
}
