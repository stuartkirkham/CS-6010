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

//Define a struct for your vector that contains 3 fields:
struct MyVector {
  int* data; // data going into the array
  int size;// how much is in the array right now
  int capacity; // amount we could put in array

// Methods
    void makeVector(MyVector initialCapacity); //should return a vector with the given capacity and a size of 0
    void freeVector(MyVector MyVec); //should deallocate any heap memory used by the MyVector object
    void growMyVector(MyVector& MyVec); // adds to the size if array is filled
    void pushBack(MyVector MyVec, int input);
    void popBack(MyVector MyVec, int input);
    int get(MyVector myVec, int index);
    int set(MyVector MyVec, int index, int newValue);
    int growVector(MyVector myVec);

};


            
