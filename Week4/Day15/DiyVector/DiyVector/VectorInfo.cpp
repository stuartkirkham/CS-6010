//
//  VectorInfo.cpp
//  DiyVector
//
//  Created by Stuart Kirkham on 9/13/22.
//

#include "VectorInfo.hpp"

MyVector::MyVector(int initialCapacity){
        capacity = initialCapacity; // amount of data we can put in the vector
        size = 0; // current amount of data
        data = new double[capacity]; // data placed in vector
}
void MyVector::freeVector(){//-- should deallocate any heap memory used by the MyVector object
    delete[] data;
    data = nullptr;
}

void MyVector::growVector(){
        if (size == capacity){
    //  1. Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
              double* tempArray = new double[capacity * 2];
    //2. Copy the contents over from MyVec.data to this temp array by looping over the temp array.
              for( int i = 0; i < size; i++ ) {
                  tempArray[ i ] = data[i];
              }
    //3. Call delete[] on MyVec.data to free up the old chunk of memory.
            delete[] data;
    //4. Set MyVec.data = the pointer to the temp array.
            data = tempArray;
            capacity *= 2;
    //5. Set the pointer to the temp array to nullptr.
            tempArray = nullptr; //nullify the pointer
        }
}

void MyVector::pushBack(int input) {
    if (size == capacity){
        growVector();
    }
//    this->data[this->size] = input;
    data[ size ] = input;
    this->size += 1; //this inserts a value in the first position of the vector since it is empty.
}

void MyVector::popBack(int input) {
    size = size - 1;//returns the vector - 1 from the back.
}
int MyVector::get(int index){//-- return the appropriate value in the vector.
        return data[index];
}
int MyVector::set(int index, int newValue){//-- set the appropriate value in the vector.
    if (size >= capacity){
        growVector();
    }
    for ( int i = size - 1; i>= index; i--){
        data[index] = newValue;
        ++size;
    }
    return newValue;
}
int MyVector::getSize(){
    return size;
}

int MyVector::getCapacity(){
    return capacity;
}

