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
    std::cout << "Size after filling vector: " << vec1.getSize() << "\n";
    MyVector vec2(11);
    vec2.pushBack(11);
    vec2.pushBack(12);
    vec2.pushBack(13);
    vec2.pushBack(14);
    vec2.pushBack(15);
    vec2.pushBack(16);//populate  a second vector
    vec2.pushBack(17);
    vec2.pushBack(18);
    vec2.pushBack(19);
    vec2.pushBack(20);
    vec2.pushBack(21);
   
    MyVector vec3(vec1); // copy vec1 into vec3
    // testing overloaded operators
    if (vec1 < vec2){
        std::cout << "vec1 < vec2?: YES\n";
    }
    if (vec2> vec1){
        std::cout << "Vec2 > vec1?: YES\n";
    }
    if (vec3 <= vec1){
        std::cout << "Vec3 <= vec1?: YES\n";
    }
    if (vec2 >= vec1){
        std::cout << "Vec2 >= vec1?: YES\n";
    }
    if (vec3 == vec1){
        std::cout << "== works!\n";
    }
    if (vec1 != vec2){
        std::cout << "!= works!\n";
    }
    
    //test get
    std::cout << "The value of vec1[3] = "<< vec1.get(3) << "\n";
    
    //test set
    //std::cout <<  << "\n";
    vec1.set(5,45);
   
    //test popback
    //vec1.popBack(5);
    std::cout << "replaces value in vec1[5] from 6 to 45: " <<vec1.get(5) << "\n";
   
    //test growVector
    //vec1.growVector();
    std::cout << "Updated Capacity after increasing: " << vec1.getCapacity() << "\n";
    
    // test freeVector
    //vec1.freeVector();
    std::cout << "Size: " << vec1.getSize() << "\n";
    //std::cout << "Updated Capacity: " << vec1.getCapacity() << "\n";
    
    //test [] operator
    std::cout << "Vec1[10] using [] operator: " << vec1[9] << "\n";
    // copy constructor
    //TEST == OPERATOR
    // TEST != OPERATOR

    
    std::cout << "The value of vec3[3] = "<< vec3.get(3) << "\n";
    
    //test set
    //std::cout <<  << "\n";
    vec3.set(5,45);
   
    //test popback
    vec3.popBack(5);
    std::cout << "replaces value in vec3[5] from 6 to 45: " <<vec3.get(5) << "\n";
   
    //test growVector
    vec3.growVector();
    std::cout << "Updated Capacity after increasing: " << vec3.getCapacity() << "\n";
    
    // test freeVector
    //vec3.freeVector();
    std::cout << "Size: " << vec3.getSize() << "\n";
    //std::cout << "Updated Capacity: " << vec1.getCapacity() << "\n";
    
    //test [] operator
    std::cout << "Vec1[10] using [] operator: " << vec3[9] << "\n";
    MyVector vec5 = vec1;
    // TEST TO ENSURE = OPERATOR WORKS

    return 0;
}
