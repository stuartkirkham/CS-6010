//
//  main.cpp
//  MagicDates
//
//  Stuart Kirkham, AnnMarie Hoppel, Josh Adams
//

#include <iostream>
#include <string>
int main() {
    //Write a program that prompts the user for a date in US numeric format (same as in Part 2), and reports whether or not it is a magic date. The same assumptions and error-checking as in Part 2 also apply here.
    std::cout << "Please enter a date in US numeric format (mm/dd/yyyy): \n";
    std::string magic_date;
    std::cin >> magic_date;
    if (magic_date.length() == 10) {
        std::cout << "Invalid date. \n";
        return 0;
    }
    else {
    // break up string into months,days,years
        std::string magic_month_str = magic_date.substr(0,2);
        std::string magic_day_str = magic_date.substr(3,2);
        std::string magic_year_str = magic_date.substr(8,2);
    //turn substrings into integers
        int magic_month_int = std::stoi(magic_month_str);
        int magic_day_int = std::stoi(magic_day_str);
        int magic_year_int = std::stoi(magic_year_str);
    //return whether the date is a magic year.
        if (magic_month_int * magic_day_int == magic_year_int) {
            std::cout << magic_date << " IS a magic date. \n";
        }
        else{
        std::cout << magic_date << " is NOT a magic date. \n";
        }
    }
    return 0;
}
