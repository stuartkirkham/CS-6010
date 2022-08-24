//
//  main.cpp
//  IfStatementPractice GROUP LAB
//  8/24/22
//  Stu Kirkham
//  Ann Marie Hoppel
//  Kevin Lee

#include <iostream>

int main() {
    // *** PART 1 ***
    //Prompt the user for their age at the console, then read in their response, and store it in a variable.
    int age;
    std::cout << "What is your age? ";
    std::cin >> age;
   // Print whether the user is old enough to vote.
    if (age <= 18) {
        std::cout << "You are not old enough to vote. \n";
    }
    else{
        std::cout << "You are old enough to vote. \n";
        }
   // Print whether the user is old enough to run for senate.
    if (age <= 30){
        std::cout << "You are not old enough to run for senate. \n";
    }
    else{
        std::cout << "You are old enough to run for senate. \n";
    }
   // Print which generation the user is a part of:

    //They're part of the "greatest generation" if they're older than 80,
    if (age > 80){
        std::cout << "You're part of the greatest generation. \n";
    }

    //"baby boomers" if they're not in the greatest generation, but are older than 60,
    else if (age <81 && age>60){
        std::cout <<"You are a baby boomer. \n";
    }
    //in "generation X" if they're older than 40,
    else if (age <61 && age>40){
        std::cout <<"You are in generation x. \n";
    }
    //a "millennial" if they're older than 20, and an "iKid" if they're younger than that.
    else if (age <41 && age>20){
        std::cout <<"You are a Millenial. \n";
    }
    else {
        std::cout <<"You are an iKid. \n";
    }
    //Hint: which tool (programming construct) do we have for making a choice between many options?
    
    // *** PART 2 ***
    //Prompt the user to enter whether or not it's a weekday (Y/N). Read in their response as a character.
    bool isWeekday = false;
    bool isHoliday = false;
    bool hasChildren = false;
    char userResponse;
    std::cout << "Is today a weekday? (Y/N) \n";
    std::cin >> userResponse;
    if (userResponse == 'Y' || userResponse == 'y') {
        isWeekday = true;
    }
    //Prompt the user to enter whether or not it's a holiday.
    std::cout << "Is today a holiday? (Y/N) \n";
    std::cin >> userResponse;
    if (userResponse == 'Y' || userResponse == 'y') {
        isHoliday = true;
    }
    //Prompt the user to enter whether or not they have young children.
    std::cout << "Do you have young children? (Y/N) \n";
    std::cin >> userResponse;
    if (userResponse == 'Y' || userResponse == 'y') {
        hasChildren = true;
    }
    //Print whether the user gets to sleep in today or not. You might want to create boolean variables based on their inputs above. For example, the user would input a character or string to tell whether or not it's a weekday. I'd store that in a variable named something like weekdayResponse, and then have boolean variable like isWeekday which you use in your conditions.
    if (hasChildren) {
        std::cout <<"You do not get to sleep in today.";
    }
    else if (isWeekday && !isHoliday) {
        std::cout <<"You do not get to sleep in today.";
    }

    else {
        std::cout <<"You get to sleep in today!";
    }
    
    return 0;
}
