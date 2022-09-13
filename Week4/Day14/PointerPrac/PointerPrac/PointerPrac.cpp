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
    sum = sum + someVar.data[i];
  }
  return sum;
}
void growMyVector(MyVector& someVar){
    if (someVar.size == someVar.capacity){
//  1. Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
          double* tempArray = new double[someVar.capacity * 2];
//2. Copy the contents over from someVar.data to this temp array by looping over the temp array.
          for( int i = 0; i < someVar.capacity; i++ ) {
              tempArray[ i ] = someVar.data[i];
          }
//3. Call delete[] on someVar.data to free up the old chunk of memory.
        delete someVar.data;
//4. Set someVar.data = the pointer to the temp array.
        someVar.data = tempArray;
//5. Set the pointer to the temp array to nullptr.
        tempArray = nullptr; //nullify the pointer
    }
}

int main(int argc, const char * argv[]) {
    MyVector vec1;
    vec1.capacity = 10;
    vec1.size = 0;
    vec1.data = new double[vec1.capacity];
    for(int i = 0; i < vec1.capacity; i++){
      vec1.data[i] = 1.0;
    }
    std::cout << "The sum of the array is: " << arrayModSum(vec1, vec1.capacity);
    delete [] vec1.data;
    growMyVector(vec1);
    for(int j = 0; j < vec1.capacity; j++){
      vec1.data[j] = -1.0;
    }
    return 0;


}
