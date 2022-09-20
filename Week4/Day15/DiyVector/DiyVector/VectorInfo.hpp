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
#include <algorithm>

//Define a struct for your vector that contains 3 fields:
template<typename T>
class MyVector {

private:
    
  T *data; // data going into the array
  int size_;// how much is in the array right now
  int capacity_; // amount we could put in array

public:
    
// Constructors
    //MyVector(int initialCapacity); //should return a vector with the given capacity and a size of 0
    // ~MyVector(); // destructor
    //MyVector(const MyVector& v2);// copy constructor
    
    MyVector(int initialCapacity){
            capacity_ = initialCapacity; // amount of data we can put in the vector
            size_ = 0; // current amount of data
            data = new T[capacity_]; // data placed in vector
    }
    ~MyVector(){//-- should deallocate any heap memory used by the MyVector object
        delete[] data;
        data = nullptr;
        size_ = 0;
        capacity_ = 0;
    }
    MyVector(const MyVector & v2){ // cop constructor
        if (this == & v2){
        }
        capacity_ = v2.capacity_;
        size_ = v2.size_;
        //data = v2.data; this is bad since it just makes a pointer to the same data
        data = new T[capacity_];
        for (int i = 0; i < size_; i++){
            data[i] = v2.data[i];
        }
        
    }
// Methods
    //void growVector();
    //void pushBack(const T input);
    //void popBack(const T input);
    //int get(int index);//- return the appropriate value in the vector. This should work like [] does for std::vectors
    //void set(int index, int newValue);//set the appropriate value in the vector. This should work like [] for std::vector when they're on the left of an equals sign (vec[3] = 10;).
    //int getSize();
    //int getCapacity();

    T* begin() { return data; }
    T* end() { return data + size_; }
    const T* begin() const { return data; }
    const T* end() const { return data + size_; }
    
    void growVector(){
            if (size_ == capacity_){
        //  1. Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
                  T* tempArray = new T[capacity_ * 2];
        //2. Copy the contents over from MyVec.data to this temp array by looping over the temp array.
                  for( int i = 0; i < size_; i++ ) {
                      tempArray[ i ] = data[i];
                  }
        //3. Call delete[] on MyVec.data to free up the old chunk of memory.
                delete[] data;
        //4. Set MyVec.data = the pointer to the temp array.
                data = tempArray;
                capacity_ *= 2;
        //5. Set the pointer to the temp array to nullptr.
                tempArray = nullptr; //nullify the pointer
            }
    }

    void pushBack(T input) {
        if (size_ == capacity_){
            growVector();
        }
    //    this->data[this->size] = input;
        data[size_] = input;
        size_ += 1; //this inserts a value in the first position of the vector since it is empty.
    }

    void popBack(T input) {
        size_ = size_ - 1;//returns the vector - 1 from the back.
    }
    T get(const T index){//-- return the appropriate value in the vector.
            return data[index];
    }
    void set(T index, T newValue){//-- set the appropriate value in the vector.
        if (size_ >= capacity_){
            growVector();
        }
        for ( int i = size_ - 1; i>= index; i--){
            data[index] = newValue;
            ++size_;
        }
    }
    T getSize(){
        return size_;
    }

    T getCapacity(){
        return capacity_;
    }

    
// Overloaded operators
    //T& operator[] (int index);// this bracket operator assigns (set function);
   /* bool operator== (const MyVector& rhs)const;
    bool operator!= (const MyVector& rhs)const;
    bool operator< (const MyVector& rhs)const;
    bool operator<= (const MyVector& rhs)const;
    bool operator> (const MyVector& rhs)const;
    bool operator>= (const MyVector& rhs)const;*/
    T& operator[] (T index){ // [] operator]
        return data[index];
    }
    MyVector<T>&operator= (const MyVector<T>& other){
        if (*data == *(other.data)){
            return *this;
        }
        capacity_ = other.capacity_;
        size_ = other.size_;
        for (int i = 0; i < size_; i++){
            data[i] = other.data[i];
        }
        return *this;
    }
    
    bool operator== (const MyVector<T>& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (!(data[i] == rhs.data[i])){
                    return false;
                }
                return true;
            }
        }
        return false;
    }
    
    bool operator!= (const MyVector<T>& rhs)const{
        return !(data==rhs.data && size_ == rhs.size_);
    }
        
    bool operator< (const MyVector<T>& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] < rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ < rhs.size_;
    }
    
    bool operator<= (const MyVector<T>& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] <= rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ <= rhs.size_;
    }
    
    bool operator> (const MyVector<T>& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] > rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ > rhs.size_;
    }
    
    bool operator>= (const MyVector<T>& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] >= rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ >= rhs.size_;;
    }
};




            
