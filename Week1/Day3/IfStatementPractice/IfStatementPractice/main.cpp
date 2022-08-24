//
//  main.cpp
//  IfStatementPractice GROUP LAB
//
//  Created by Stuart Kirkham on 8/24/22.
//

#include <iostream>

int main() {
    // *** PART 1 ***
    //Prompt the user for their age at the console, then read in their response, and store it in a variable.
    int age;
    std::cout << "What is your age?";
    std::cin >> age;
   // Print whether the user is old enough to vote.
    if (age <= 18) {
        std::cout << "You are not old enough to vote.";
    }
    else{
        std::cout << "You are old enough to vote.";
        }
   // Print whether the user is old enough to run for senate.
    if (age <= 30){
        std::cout << "You are not old enough to run for senate.";
    }
    else{
        std::cout << "You are old enough to run for senate.";
    }
   // Print which generation the user is a part of:

    //They're part of the "greatest generation" if they're older than 80,
    if (age > 80){
        std::cout << "You're part of the greatest generation.";
    }

    //"baby boomers" if they're not in the greatest generation, but are older than 60,
    else if (age <80 && age>60){
        std::cout <<"You are a baby boomer.";
    }
    //in "generation X" if they're older than 40,
    else if (age <61 && age>40){
        std::cout <<"You are in generation x.";
    }
    //a "millennial" if they're older than 20, and an "iKid" if they're younger than that.

    //Hint: which tool (programming construct) do we have for making a choice between many options?
    std::cout << "Hello, World!\n";
    
    
    
    
    // *** PART 2 ***
    //Prompt the user to enter whether or not it's a weekday (Y/N). Read in their response as a character.

    //Prompt the user to enter whether or not it's a holiday.

    //Prompt the user to enter whether or not they have young children.

    //Print whether the user gets to sleep in today or not. You might want to create boolean variables based on their inputs above. For example, the user would input a character or string to tell whether or not it's a weekday. I'd store that in a variable named something like weekdayResponse, and then have boolean variable like isWeekday which you use in your conditions.
    
    
    return 0;
}
