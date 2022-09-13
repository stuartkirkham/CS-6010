//
//  VectorInfo.cpp
//  DiyVector
//
//  Created by Stuart Kirkham on 9/13/22.
//

#include "VectorInfo.hpp"

void makeVector(int initialCapacity){
    MyVector MyVec;
    MyVec.capacity = initialCapacity; // amount of data we can put in the vector
    MyVec.size = 0; // current amount of data
    MyVec.data = new int[MyVec.capacity]; // data placed in vector
}

void freeVector(MyVector& myVec){
    delete myVec.data;
    myVec.data = nullptr;
}
int growVector(MyVector& MyVec){
        if (MyVec.size == MyVec.capacity){
    //  1. Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
              int* tempArray = new int[MyVec.capacity * 2];
    //2. Copy the contents over from MyVec.data to this temp array by looping over the temp array.
              for( int i = 0; i < MyVec.size; i++ ) {
                  tempArray[ i ] = MyVec.data[i];
              }
    //3. Call delete[] on MyVec.data to free up the old chunk of memory.
            delete MyVec.data;
    //4. Set MyVec.data = the pointer to the temp array.
            MyVec.data = tempArray;
            MyVec.capacity *= 2;
    //5. Set the pointer to the temp array to nullptr.
            tempArray = nullptr; //nullify the pointer
        }
    return 0;
}

void pushBack(MyVector& MyVec, int input)
{
    if (MyVec.size == MyVec.capacity)
    {
        growVector(MyVec);
    }
    MyVec.data[MyVec.size] = input;
    MyVec.size += 1; //this inserts a value in the first position of the vector since it is empty.
}
void popBack (MyVector& MyVec)
{
    MyVec.size = MyVec.size - 1;//returns the vector - 1 from the back.
}
int get(MyVector myVec, int index){
    
    return 0;
}
int set(MyVector MyVec, int index, int newValue){
    return 0;
}

