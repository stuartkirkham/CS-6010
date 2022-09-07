//
//  main.cpp
//  NumberRepresentations
//
//  Created by Stuart Kirkham on 9/7/22.
//

#include <iostream>
#include <cstdint>
#include <stdint.h>
#include <assert.h>
#include <iomanip>
#include <cmath>
#include <fstream>
// this speciifies how close they have to be in order to be equal.
bool approxEquals ( double a, double b, double tolerance ){
    if (abs(a - b) < tolerance) {
        return true;
    }
    else {
        return false;
    }
}
void readFile(std::ifstream& ins){
// this function reads the file, and if it cant open returns nonexistent file; otherwise it will break it down into chars and return the unicode/utf-8 value for each char.
    char singleChar;
    std::string allTheChars;
    if (ins.fail()) {
        std::cout << "Nonexistent file!  \n";
        exit(1);
    }
    while (ins >> singleChar) {
        std::cout << singleChar << std::endl;
    }
}
int main(int argc, const char * argv[]) {
    
    // PART 1
    // outputting the size of various data types
    
    std::cout << sizeof(char) << "\n";     //1byte
    int x;
    std::cout << sizeof(x) << "\n";        // 4bytes
    
    // signed ints
    
    std::cout << sizeof(int8_t) << "\n";  // 1byte
    std::cout << sizeof(int16_t) << "\n"; // 2bytes
    std::cout << sizeof(int64_t) << "\n"; // 8bytes
   
    // unsigned ints
    
    std::cout << sizeof(uint8_t) << "\n";  // 1byte
    std::cout << sizeof(uint16_t) << "\n"; // 2bytes
    std::cout << sizeof(uint64_t) << "\n"; // 8bytes
    
    //PART 2 : FLOATING POINT
    float num = (.1+.2);
    double a = .1;
    double b = .2;
    double tolerance = .3;
    
    std::cout << num << "\n";
    assert(num = .1+.2);
    std::cout << num << "\n";
    std::cout << std::setprecision(18);
    std::cout << num << "\n";
    std::cout << approxEquals(a,b,tolerance) << "\n";
    
    //PART 3 : UNICODE / UTF-8
    std::string fileName = "UTF-8-demo.txt";
    std::ifstream ins (fileName);
    //readFile(ins);
    
    return 0;
}
