//
//  MyVector.hpp
//  Class and Object class examples
//
//  Created by Stuart Kirkham on 9/13/22.
//

#pragma once
#define MyVector_hpp
#include <iostream>
#include <stdio.h>
class MyVector {
private:
    double *data;
    size_t size_, capacity_;
    
public:
    void setSize(size_t size) {
        size_ = size;
    }
    size_t size() const {
        return size_;
    }
    double vecSum();
    void makeVector(double* d, size_t size);
    void deleteVector() {
        delete[] data;
        data = nullptr;
        size_ = 0;
        capacity_ = 0;
    }
    void printVector();
};


