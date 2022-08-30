//
//  main.cpp
//  Vector Class Examples
//
//  Created by Stuart Kirkham on 8/30/22.
//

#include <iostream>
#include <vector>

void printIntVector(std::vector<int> input){
    for (int el : input) {
        std::cout << el << " ";
    }
}

std::vector<int> InsertIntoVector(int pos, int value, std::vector <int> input){
   // if (input.size() < pos){
      //  input[pos] = value; this doesnt work because youre attempting to access a position that doesnt exist.
      // non destructively increase the size of vector
   // }
    // grow vector to make room
    input.push_back(-100);
    // make room and shift vector values to the right
    for (int i = input.size(); i >= pos; i--) {
       // input [i + 1] = input [i]; this is wrong, it overwrites the data
        input[i] = input[i-1];
    }
    input[pos] = value;
    return input;
}


int main() {
    std::vector<int> nums = {1,2,3,4,5 };
    
    // print vector
    //std::cout << nums; this doesnt work with vectors!
    // you have to loop through the vector to print it.
    
    for (int i = 0; i<nums.size(); i++){
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";
    
    // print with a for each loop
    for (int nums_el  : nums) {
        std::cout << nums_el << " ";
    }
    std::cout << "\n";
    
    // print with a for each loop and their location
    int pos = 0;
    for (int nums_el  : nums) {
        std::cout << nums_el << " is at position " << pos << "\n";
        pos++;
    }
    std::cout << "\n";
    
    //add elements to end of vector
    for (int i = 10; i >= 6; i--){
        nums.push_back(i);
    }
    printIntVector(nums);
    std::cout <<"\n";
    
    //change 6th element:
    nums[5] = -100;
    nums[nums.size()-1] = -200;
    printIntVector(nums);
    
    // make a vector of chars; the number in the variable definition is the size of the char
    std::vector<std::string> myChars(5, "aha");
    
    // can we add to string?
    std::string dummy = "blah";
    //dummy = dummy + myChars; this doesnt work
    for (std::string c : myChars) {
        dummy += c;
    }
  //  for (std::string s : dummy) {
   //     std::cout << s << " ";
  //  }
    std::cout << dummy;
    return 0;
    
}
