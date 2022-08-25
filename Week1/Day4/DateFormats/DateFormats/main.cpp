//
//  main.cpp
//  DateFormats
//
//  Creator: Annmarie Hoppel
//  Partners: Josh Adams and Stu Kirkham
//  Date: 25 Aug 2022
//  Class: CS 6010
//  Assignment: Date Formats Lab
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    // User inputs a date in numeric format
    string numericFormat;
    cout << "Enter a date in MM/DD/YYYY Format: \n";
    cin >> numericFormat;
    
    // Conversion of date from numeric format to english sentence format
    string sentenceFormat;
    size_t first_slash = numericFormat.find("/"); // Finds the first slash entered in the date
    size_t second_slash = numericFormat.find("/", first_slash+1); // Finds the second slash entered in the date
    
    string year_string = numericFormat.substr(second_slash+1); // Creates a substring for the year
    int year = stoi(year_string); // Converts the year string to an integer
    
    string month_string = numericFormat.substr(0); // Creates a substring for the month
    int month = stoi(month_string); // Converts the month string to an integer
    
    int day_length = second_slash - first_slash; // variable defining the number of characters entered for the day
    string day_string = numericFormat.substr(first_slash+1, day_length-1); // Creates a substring for the date
    int day = stoi(day_string); // Converts the day string to an integer
    
    // Checks validity of date based on year
    if (year < 1000 || year > 9999) {
        cout << "Invalid date \n";
        return 0; // Ends program due to invalid date
    }
        
    // Checks validity of date based on month
    if (month < 1 || month > 12) {
        cout << "Invalid date \n";
        return 0; // Ends program due to invalid date
    }
    
    // Checks validity of date based on day
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day < 0 || day > 31) {
            cout << "Invalid date \n";
            return 0; // Ends program due to invalid date
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 0 || day > 30) {
            cout << "Invalid date \n";
            return 0; // Ends program due to invalid date
        }
    }
    else {
        if (day < 0 || day > 28) {
            cout << "Invalid date \n";
            return 0; // Ends program due to invalid date
        }
    }
    
    // Conversion of month number to month name
    if (month == 1) {
        month_string = "January "; // Changes month string to english sentence format
    }
    else if (month == 2) {
        month_string = "February "; // Changes month string to english sentence format
    }
    else if (month == 3) {
        month_string = "March "; // Changes month string to english sentence format
    }
    else if (month == 4) {
        month_string = "April "; // Changes month string to english sentence format
    }
    else if (month == 5) {
        month_string = "May "; // Changes month string to english sentence format
    }
    else if (month == 5) {
        month_string = "June "; // Changes month string to english sentence format
    }
    else if (month == 7) {
        month_string = "July "; // Changes month string to english sentence format
    }
    else if (month == 8) {
        month_string = "August "; // Changes month string to english sentence format
    }
    else if (month == 9) {
        month_string = "September "; // Changes month string to english sentence format
    }
    else if (month == 10) {
        month_string = "October "; // Changes month string to english sentence format
    }
    else if (month == 11) {
        month_string = "November "; // Changes month string to english sentence format
    }
    else if (month == 12) {
        month_string = "December "; // Changes month string to english sentence format
    }
    
    sentenceFormat = month_string + day_string + ", " + year_string; // String to report sentence format of the date
    cout << sentenceFormat << endl; // Reports date in sentence format to user
    
    return 0;
}
