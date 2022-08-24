//Stu Kirkham
//ForLoopPractice Lab
//8/24/2022

#include <iostream>

//Print the numbers from 1 to 10. Do this once using a for loop, and once using a while loop. Add a comment indicating which type of loop was more appropriate.
int main() {
    int numPrint;
    for(int numPrint=1; numPrint<=10; numPrint++) {
        std::cout << numPrint << " ";
    }
    std::cout <<"\n";
    numPrint = 1;
    while (numPrint <=10){
        std::cout << numPrint << " ";
        numPrint = numPrint +1;
    }
    std::cout <<"\n";
//Prompt the user to enter the two numbers. Then print all the numbers from the first to the second. For example, if the user entered 25 and 40, you should print 25, 26, 27, ... 39, 40. What happens/should happen if the numbers come in reverse order? You should handle this appropriately.
    int firstNum;
    int secondNum;
    std::cout <<"Enter two numbers. ";
    std::cin >> firstNum;
    std::cin >> secondNum;
//    int secondNumCopy = secondNum;
    if (firstNum > secondNum){
        while (firstNum >= secondNum) {
            std::cout << secondNum << " ";
            secondNum = secondNum +1;
        }
    }
    else {
        while (secondNum >= firstNum) {
            std::cout << firstNum << " ";
            firstNum = firstNum +1;
        }
    }
//Print all the odd numbers between 1 and 20. Come up with two solutions: one that uses a loop and an if statement, and one that doesn't require an if statement. Comment on which you think is better.
    std::cout<<"\n";
    for (int oddNum = 1; oddNum<=20;){ //I thought that this loop was easier to understand than running the if loop.
        std::cout << oddNum <<" ";
        oddNum=oddNum+2;
    }
    std::cout<<"\n";
    for (int oddNum = 1; oddNum<=20 ; oddNum++){
        if (oddNum % 2 == 1){
            std::cout<< oddNum << " ";
        }
    }
//Ask a user to enter positive numbers to add up. Keep reading and adding numbers until the user enters a number that is less than 0, then print the sum. For example, if the user entered 1 2 3 -1, you should print 6. This one is a little tricky!
    std::cout << "\n";
    std::cout << "Enter positive numbers to add up. to quit, enter a negative number.";
    int addRandomNumber = 0;
    int totalRandomNumber = 0;
    while (addRandomNumber >=0){
        std::cin >> addRandomNumber;
        if (addRandomNumber>=0){
            totalRandomNumber = totalRandomNumber + addRandomNumber;
        }
    }
    std::cout<<"Total: " << totalRandomNumber << "\n";
//Print a multiplication table for the numbers 1 to 5.
    for (int multiplierVariable = 1; multiplierVariable <=5; multiplierVariable++){
        std::cout <<multiplierVariable << " " << (multiplierVariable*2) << " " << (multiplierVariable*3) << " " << (multiplierVariable*4) << " " << (multiplierVariable*5) << " \n";
    }
        return 0;
}
