//
//  main.cpp
//  FunctionPractice
//
//  Stuart Kirkham on 8/26/22.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <locale>
using namespace std;
//Part 1: Practice Calling Functions
//a)Ask the user to enter the right-angle side lengths of a triangle and then print the length of the hypotenuse (remember the pythagorean theorem?). You'll need to use the std::sqrt function that's defined in the <cmath> header. Note: x^2 does not mean x*x! Don't use the ^ operator because it does NOT mean power!

//Part 2: a.
//Write a function that performs the hypotenuse task described above, but does not read from std::cin. What parameters should it take, and what will it return? Why wouldn't you want to get the input from std::cin inside your function?

//The parameters for this are the 2 shorter lengths of the triangle, and returns the hypotenuse. You dont want the cin statements in the function because it needs the cin statements to be put into the function.

float hypotenuseFinder(float triLengthA, float triLengthB){
    float hypotenuseOfTriangle = sqrt(pow(triLengthA,2)+pow(triLengthB,2));
    return hypotenuseOfTriangle;
}

//b)Ask the user to input the speed they're going (a double) and the angle they're going in (a double, that's the angle in radians). Then use the std::cos and std::sin functions and the formulas x = speed*cos(angle), y = speed*sin(angle) to print out their x and y velocity.

//Why would it be difficult to turn the speed/velocity task above into a function? What imperfect solutions can you come up with that wrap that code into one (or more) functions?

// this is difficult to turn the task into a function because you need to return 2 values. The best solution is to write a second function and call both of them within the main prorgam.

double findXVelocity (double speed, double angle) {
    double xVelocity = speed*cos(angle);
    return (xVelocity);
}
double findYVelocity (double speed,double angle) {
    double yVelocity = speed*sin(angle);
    return (yVelocity);
}

//Write a function isCapitalized that takes in a string parameter and returns whether or not the string starts with a capital letter.
// this function returns a value to see if the string is capitalized or not. if it returns a 0, it is not capitalized. if it returns any other number it is capitalized.
bool isCapitalized (string findCapitalInString){
    bool firstLetterCapitlized = isupper(findCapitalInString[0]);
    return firstLetterCapitlized;
}
//Write a function boolToString that takes in a Boolean parameter and returns the string "true" or "false" depending on its value. Use this function to display the results of testing the isCapitalized function.
void boolToString (bool firstLetterCapitalized){
    if(firstLetterCapitalized) {
        cout << "True \n";
    }
    else {
        cout << "False \n";
    }
    
}

//Challenge question: write a function called isPrime that takes an integer and returns whether or not it's a prime number
int main() {
    // Part 1 a.
    cout << "Please enter the right-angle side lenghts of a triangle to find the length of the hypotenuse. \n";
    float rightAngleA;
    float rightAngleB;
    cin >> rightAngleA;
    cin >> rightAngleB;
    cout << "Hypotenuse: " << hypotenuseFinder(rightAngleA,rightAngleB) << "\n";
    // Part 1 b.
    cout << "How fast are you going and what angle are you going? \n";
    double speedVelocity;
    double angleVelocity;
    cin >> speedVelocity;
    cin >> angleVelocity;
    cout << "Your X velocity is: " << findXVelocity(speedVelocity,angleVelocity) << "\n";
    cout << "Your Y velocity is: " << findYVelocity(speedVelocity,angleVelocity) << "\n";
    // Part 1 c.
    std::time_t result = std::time(nullptr); // The program works!
    std::cout << std::asctime(std::localtime(&result)) << result << " seconds since the Epoch\n \n";
    // std::time(), std::asctime(), and std::localtime() are the functions being                                                     called.

    //Part 2 a.
    cout << "Please enter a sentence to find out if the first letter is capitalized.";
    string capitalSentenceFinder;
    cin >> capitalSentenceFinder;
    cout << "is the first letter capitalized? true or false : \n";
    bool capitalResult = isCapitalized(capitalSentenceFinder);
    boolToString(capitalResult);
    return 0;
}
