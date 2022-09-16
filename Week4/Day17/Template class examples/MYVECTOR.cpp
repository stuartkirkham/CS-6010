//
//  MYVECTOR.cpp
//  Template class examples
//
//  Created by Stuart Kirkham on 9/15/22.
//

#include "MYVECTOR.hpp"
// copy constructor
MyVector::MyVector(const MyVector& v2){
    
    if (this != &v2){// this if statement is important to not duplicate identical data on the heap.
        capacity_ = v2.capacity_;
        size_=v2.size_;
        data = new double[capacity_];
        for (size_t i=0; i < size_; i++) {
            data[i] = v2.data[i];
        }
    }
}
