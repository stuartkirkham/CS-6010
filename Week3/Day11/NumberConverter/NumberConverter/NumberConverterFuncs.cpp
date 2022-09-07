//
//  NumberConverterFuncs.cpp
//  NumberConverter
//
//  Created by Josh Adams & Stu Kirkham on 9/6/22.
//

#include "NumberConverterFuncs.hpp"
int numberConverter (std::string value1, int value2){
    int stringToInt = 0;
    //converts string to int.
    if (value2 == 10){
        int stringToInt = stoi(value1, 0, 10);
        std::cout << "Integer value: " << stringToInt;
    }
    //converts binary to integer.
    else if (value2 == 2){
        int stringToInt = stoi(value1, 0, 2);
        std::cout << "Integer value: " << stringToInt;
        }
    //converts hexadecimal to integer.
    else if (value2 == 16) {
        int stringToInt = stoi(value1, 0, 16);
        std::cout << "Integer value: " << stringToInt;
    }
    // this outputs if the base number entered isnt decimal, binary or hexadecimal. tests for valid base input
    else {
        std::cout << "Invalid base.";
    }
    return stringToInt;
}
//this func simply converts an int into a string which will still be in decimal representation.
string FindDecimal(int input)
{
    string decRep = to_string(input);
    return decRep;
}
//this func takes in the integer, goes into a while loop (when int is 0 the loop is over), converts the int % 2 to a string and adds it to the final string I will return, this loop also turns the input into input /2 until it reaches 0 (in integer terms). Returns the final string.
string FindBinary(int input)
{
    string binRep;
    int initialInput = input;
    input = abs(input);
   while (input != 0)
   {
       binRep += to_string(input % 2);
       input /= 2;
   }
    if (initialInput < 0)
    {
        binRep += "-";
    }
    reverse (binRep.begin(), binRep.end());
    
    return binRep;
}
//this func does a similar thing to FindBinary, but I added a counter to add A,B,C,D,E,F into the string if that was what the module found.
string FindHex( int input)
{
    string hexRep;
    int hexCounter;
    int initialInput = input;
    input = abs(input);
    while (input != 0)
    {
        hexCounter = input % 16;
        
        if (hexCounter == 10)
        {
            hexRep += "A";
        }
        else if (hexCounter == 11)
        {
            hexRep += "B";
        }
        else if (hexCounter == 12)
        {
            hexRep += "C";
        }
        else if (hexCounter == 13)
        {
            hexRep += "D";
        }
        else if (hexCounter == 14)
        {
            hexRep += "E";
        }
        else if (hexCounter == 15)
        {
            hexRep += "F";
        }
        else
        {
            hexRep += to_string(hexCounter);
        }
        input /= 16;
    }
    if (initialInput < 0)
    {
        hexRep += "-";
    }
    reverse (hexRep.begin(), hexRep.end());
    return hexRep;
}

