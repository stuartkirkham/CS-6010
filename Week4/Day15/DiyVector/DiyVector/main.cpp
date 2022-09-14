//
//  main.cpp
//  DiyVector
//
//  Created by Stuart Kirkham on 9/13/22.
//
#include "VectorInfo.hpp"

int main(int argc, const char * argv[]) {
    // Create tests to ensure our vector struct is working.
    MyVector vec1(10);
    //assert(vec1.capacity == 10);
    //assert(vec1.size == 0);
    //assert(vec1.data != nullptr);
    std::cout << "Capacity: " << vec1.getCapacity() << "\n";
    std::cout << "Size: " << vec1.getSize() << "\n";
    vec1.pushBack(1);
    vec1.pushBack(2);
    vec1.pushBack(3);
    vec1.pushBack(4);
    vec1.pushBack(5);
    vec1.pushBack(6);//populate vector
    vec1.pushBack(7);
    vec1.pushBack(8);
    vec1.pushBack(9);
    vec1.pushBack(10);
    //test get
    std::cout << vec1.get(3) << "\n";
    //test set
    std::cout << vec1.set(5,45) << "\n";
    //test popback
    vec1.popBack(5);
    std::cout << vec1.get(5) << "\n";
    //test growVector
    vec1.growVector();
    std::cout << "Updated Capacity: " << vec1.getCapacity() << "\n";
    // test freeVector
    //vec1.freeVector();
    std::cout << "Size: " << vec1.getSize() << "\n";
    //std::cout << "Updated Capacity: " << vec1.getCapacity() << "\n";
    return 0;
}
