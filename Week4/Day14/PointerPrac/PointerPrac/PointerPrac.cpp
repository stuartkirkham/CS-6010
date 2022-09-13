//
//  main.cpp
//  PointerPrac
//
//  Created by Stuart Kirkham on 9/12/22.
//

#include <iostream>
struct MyVector {
  double* data; // data going into the array
  int size;// how much is in the array right now
  int capacity; // amount we could put in array
};

int arrayModSum(MyVector& someVar, int myArraySize){
  int sum = 0;
  for (int i = 0; i< someVar.capacity; i++){
    someVar.data[i] = someVar.data[i]+1;
    sum = sum someVar.data[i];
  }
  return sum;
}

int main(int argc, const char * argv[]) {
    MyVector vec1;
    vec1.capacity = 10;
    vec1.size = 0;
    vec1.data = new double[vec1.capacity];
    for(int i = 0; i < vec1.capacity; i++){
      vec1.data[i] = 1.0;
    }
    std::cout << "The sum of the array is: " << arrayModSum(vec1, vec1.capacity)
    delete vec1.data;
    return 0;
}
