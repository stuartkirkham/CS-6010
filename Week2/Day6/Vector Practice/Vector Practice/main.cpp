//
//  main.cpp
//  Vector Practice
//
//  Created by Stuart Kirkham on 8/30/22.
//

#include <iostream>
#include <vector>
#include <string>

int sum(std::vector<int> input) {
    int sumOfValues = 0;
    for (int i = 0; i < input.size(); i++)
        sumOfValues = sumOfValues + input[i];
    return sumOfValues;
}
std::vector<char> stringToVec(std::string sentence) {
    return std::vector<char>(sentence.begin(), sentence.end());
}

void reverse(std::vector<int> input, std::string sep=" ") {
    for (int i = input.size()-1; i >=0; i--) {
        std::cout << input[i];
    }
}
int main() {
    
    std::vector<int> input = {1,2,3,4,5};
    std::string sentence = "Hello World!";
    //std::cout << stringToVec;
    //std::cout << sum(input) << "\n"; test code to view sum.
    reverse(input);
    return 0;
    
}
