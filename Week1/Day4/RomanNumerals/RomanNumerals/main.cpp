//
//  main.cpp
//  RomanNumerals
//
//  Created by Stuart Kirkham on 8/25/22.
//

#include <iostream>

int main() {
    // Have the user enter a decimal number to be converted to roman numerals
    std::cout << "Enter decimal number: \n";
    int convert_to_roman;
    std::cin >> convert_to_roman;
    if (convert_to_roman <1){
        std::cout << "Invalid input. \n";
        return 0;
    }
    else {
        std::cout<<"Roman numeral version: \n";
        //loop to compile the numerals. the inputted variable is subtracted after each if statement
        //in order to make sure it goes through every if statement each time until it hits 0.
        while (convert_to_roman >=1){
            //M" if the remaining number is >= 1000
            if (convert_to_roman >= 1000){
                std::cout << "M";
                convert_to_roman = convert_to_roman -1000;
            }
            //"CM" if the remaining number is >= 900
            else if (convert_to_roman >= 900){
                std::cout << "CM";
                convert_to_roman = convert_to_roman -900;
            }
            //"D" if the remaining number is >= 500
            else if (convert_to_roman >= 500){
                std::cout << "D";
                convert_to_roman = convert_to_roman -500;
            }
            //"CD" if the remaining number is >= 400
            else if (convert_to_roman >= 400){
                std::cout << "CD";
                convert_to_roman = convert_to_roman -400;
            }
            //"C" if the remaining number is >= 100
            else if (convert_to_roman >= 100){
                std::cout << "C";
                convert_to_roman = convert_to_roman -100;
            }
            //"XC" if the remaining number is >= 90
            else if (convert_to_roman >= 90){
                std::cout << "XC";
                convert_to_roman = convert_to_roman -90;
            }
            //"L" if the remaining number is >= 50
            else if (convert_to_roman >= 50){
                std::cout << "L";
                convert_to_roman = convert_to_roman -50;
            }
            //"XL" if the remaining number is >= 40
            else if (convert_to_roman >= 40){
                std::cout << "XL";
                convert_to_roman = convert_to_roman -40;
            }
            
            //"X" if the remaining number is >= 10
            else if (convert_to_roman >= 10){
                std::cout << "X";
                convert_to_roman = convert_to_roman -10;
            }
            //"IX" if the remaining number is >= 9
            else if (convert_to_roman >= 9){
                std::cout << "IX";
                convert_to_roman = convert_to_roman -9;
            }
            //"V" if the remaining number is >= 5
            else if (convert_to_roman >= 5){
                std::cout << "V";
                convert_to_roman = convert_to_roman -5;
            }
            //"IV" if the remaining number is >= 4
            else if (convert_to_roman >= 4){
                std::cout << "IV";
                convert_to_roman = convert_to_roman -4;
            }
            //"I" if the remaining number is >= 1
            else if (convert_to_roman >= 1){
                std::cout << "I";
                convert_to_roman = convert_to_roman -1;
            }
        }
        std::cout << "\n";
    }
    return 0;
}
























