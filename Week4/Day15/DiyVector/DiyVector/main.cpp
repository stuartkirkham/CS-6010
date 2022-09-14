//
//  main.cpp
//  DiyVector
//
//  Created by Stuart Kirkham on 9/13/22.
//
#include "VectorInfo.hpp"

int main(int argc, const char * argv[]) {
    // Create tests to ensure our vector struct is working.
    MyVector vec1;
    vec1.makeVector(10);
    assert(vec1.capacity == 10);
    assert(vec1.size == 0);
    assert(vec1.data != nullptr);
    return 0;
}
