//
//  MYVECTOR.hpp
//  Template class examples
//
//  Created by Stuart Kirkham on 9/15/22.
//

#pragma once
#define MYVECTOR_hpp
#include <stdio.h>
#include <vector>
#include <iostream>

template<typename T>
class MyVector{
private:
    T *data;
    size_t size_, capacity_;
public:
    MyVector();
    MyVector(const MyVector<T>& v2);
    MyVector(size_t size);
    MyVector(const std::vector<T>& v);
    MyVector(T d[], size_t size);
    ~MyVector();
    
    MyVector<T> operator+(const MyVector<T>& operand2);
    const T& operator [] (int index) const;
};

template<typename T>
MyVector<T>:: MyVector() {
    capacity_ = 10;
    data = new T[capacity_];
    size_ = 0;
}
template<typename T>
MyVector<T>::MyVector(const MyVector<T>& v2){
    if (this != &v2){
        capacity_ = v2.capacity_;
        size_ = v2.size_;
        data = new T[capacity_];
        for (size_t i = 0; i < size_; i++){
            data[i] = v2.data[i];
        }
    }
}


template<typename T>
MyVector<T> MyVector<T>::operator+(const MyVector<T>& operand2){
    MyVector<T> output;
    if(size == )
}
template<typename T>
MyVector<T>::MyVector(const std::vector<T>& v){
    
}
