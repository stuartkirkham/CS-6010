//Write a program in a project called "Average" that computes a student's average assignment score. The program should prompt the user (by displaying a message) to enter five assignment scores, one at a time (each followed by pressing the return key). It should then print the average of those five scores.

//  Created by Stuart Kirkham & AnnMarie Hoppel on 8/23/22.
#include <iostream>

int main() {
    //insert gradebook numbers
    std::cout << "Enter 5 assignment scores: \n";
    float Grade1;
    float Grade2;
    float Grade3;
    float Grade4;
    float Grade5;
    std::cin >> Grade1;
    std::cin >> Grade2;
    std::cin >> Grade3;
    std::cin >> Grade4;
    std::cin >> Grade5;
    float Average = (Grade1 + Grade2 + Grade3 + Grade4 + Grade5)/5;
    std::cout << "Average: " << Average << "\n";
    return 0;
}
