//
//  MyVector.cpp
//  Class and Object class examples
//
//  Created by Stuart Kirkham on 9/13/22.
//

#include "MyVector.hpp"

double MyVector::vecSum() {
    double sum = 0.0;
    if (size() == 0){
        return 0.0;
    }
    for (size_t i = 0; i < size(); ++i){
        sum+= data[i];
    }
    return sum;
}

void makeVector(double* d, size_t size) {
    setSize(size);
    data = new double [size];
    for (size_t i = 0; i < size; i++){
        data[i] = d[i];
    }
}

void MyVector:: printVector()
{
    std::cout << "\n";
    for(size_t i =0; i < size_; i++){
        std::cout << data[i];
    }
}
    
