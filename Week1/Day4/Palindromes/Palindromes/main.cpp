//
//  main.cpp
//  Palindromes
//
//  Created by Josh Adams on 8/25/22.
// Joshua Adams, Annmarie Hoppel, Stu Kirkham
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string userInput, reversed;
    cout << "Please enter a word:" << endl;
    cin >> userInput;
    for (int i = userInput.length() -1; i >= 0; i--)
    {
        reversed += userInput[i];
    }
    
    if (reversed == userInput)
    {
        cout << endl << userInput << " is a palindrome." << endl;
    }
    else
    {
        cout << endl << userInput << " is not a palindrome." << endl;
    }
    
    return 0;
}
