//
//  VectorInfo.hpp
//  DiyVector
//
//  Created by Stuart Kirkham on 9/13/22.
//

#pragma once
#define VectorInfo_hpp
#include <stdio.h>
#include <vector>
#include <iostream>

//Define a struct for your vector that contains 3 fields:
class MyVector {

private:
    
  double* data; // data going into the array
  int size;// how much is in the array right now
  int capacity; // amount we could put in array

public:
    
// Constructors
    MyVector(int initialCapacity); //should return a vector with the given capacity and a size of 0
    
// Methods
    void growVector();
    void freeVector(); //should deallocate any heap memory used by the MyVector object
    void pushBack(int input);
    void popBack(int input);
    int get(int index);//- return the appropriate value in the vector. This should work like [] does for std::vectors
    int set(int index, int newValue);//set the appropriate value in the vector. This should work like [] for std::vector when they're on the left of an equals sign (vec[3] = 10;).
    int getSize();
    int getCapacity();
};



            
