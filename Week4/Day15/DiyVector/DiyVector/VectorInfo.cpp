//
//  VectorInfo.cpp
//  DiyVector
//
//  Created by Stuart Kirkham on 9/13/22.
//

#include "VectorInfo.hpp"
/*
MyVector::MyVector(int initialCapacity){
        capacity_ = initialCapacity; // amount of data we can put in the vector
        size_ = 0; // current amount of data
        data = new int[capacity_]; // data placed in vector
}
MyVector::~MyVector(){//-- should deallocate any heap memory used by the MyVector object
    delete[] data;
    data = nullptr;
    size_ = 0;
    capacity_ = 0;
}

MyVector::MyVector(const MyVector& v2){
    if (this == & v2){
    }
    
    capacity_ = v2.capacity_;
    size_ = v2.size_;
    //data = v2.data; this is bad since it just makes a pointer to the same data
    data = new int[capacity_];
    for (int i = 0; i < size_; i++){
        data[i] = v2.data[i];
    }
    
}

void MyVector::growVector(){
        if (size_ == capacity_){
    //  1. Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
              int* tempArray = new int[capacity_ * 2];
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

void MyVector::pushBack(int input) {
    if (size_ == capacity_){
        growVector();
    }
//    this->data[this->size] = input;
    data[ size_ ] = input;
    size_ += 1; //this inserts a value in the first position of the vector since it is empty.
}

void MyVector::popBack(int input) {
    size_ = size_ - 1;//returns the vector - 1 from the back.
}
int MyVector::get(const int index){//-- return the appropriate value in the vector.
        return data[index];
}
void MyVector::set(int index, int newValue){//-- set the appropriate value in the vector.
    if (size_ >= capacity_){
        growVector();
    }
    for ( int i = size_ - 1; i>= index; i--){
        data[index] = newValue;
        ++size_;
    }
}
int MyVector::getSize(){
    return size_;
}

int MyVector::getCapacity(){
    return capacity_;
}
*/

/*
MyVector& MyVector::operator= (const MyVector& other){
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

    bool MyVector::operator== (const MyVector& rhs)const {
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
    bool MyVector::operator!= (const MyVector& rhs)const{
        return !(data==rhs.data && size_ == rhs.size_);
    }
    bool MyVector::operator< (const MyVector& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] < rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ < rhs.size_;
    }
    bool MyVector::operator<= (const MyVector& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] <= rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ <= rhs.size_;
    }
    bool MyVector::operator> (const MyVector& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] > rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ > rhs.size_;
    }
    bool MyVector::operator>= (const MyVector& rhs)const {
        if (size_ == rhs.size_){
            for (int i = 0; i < size_; i++){
                if (data[i] >= rhs.data[i]){
                    return true;
                }
            }
        }
        return size_ >= rhs.size_;;
    }
*/
