//
//  main.cpp
//  Pointer Class Examples
//
//  Created by Stuart Kirkham on 9/2/22.
//

#include <iostream>
#include <string>
void ModifyArray(int a[5]){
    //add i to array elements
    for (int i = 0; i<5; i++){
        a[i] += i;
    }
}
void PrintArray(int a[]/* can also use *a instead of a[] */, int size){ // how to print an array
    for (int i = 0; i < size; i++){
        std::cout << a[i];
        // this is the same as *a = (1+i)
    }
}

void printValAtPosition(int *a, int pos){
    std::cout << *(a + pos*sizeof(int)/* can also use *(a+pos) which is easier to write if variable and pos are same datatype. if c++ doesnt know the datatype (like for a struct) you cant use the shorthand version. */);
}

void ReferenceBasedSwap(int& a, int&b){ // this is the better way to write a swap vs the NewSwap below using references.
    int temp = a;
    a = b;
    b = temp;
}

void NewSwap(int* a, int* b){ // pass in address of 2 numbers
    int temp = *a; // dereference a and store in temp
    *a = *b; // dereference b and store it in the dereference a
    *b = temp; // store temp in the address stored in b
            
}

int* ReturnAddress(int b) { // this is bad because the address is temporary, after it leaves this function the address is gone
    return &b;
}


// what is const char *argv[]? it is a pointer to an array. basically an array of arrays or pointer of pointers.
// pointers and arrays are interchangable. it is read as *argv[] because the parameters aren't predetermined.
int main(int argc, const char * argv[]) {
    // create a C-style array and pass it to a function
    int a[5] = {1,2,3,4,5};
    ModifyArray(a);
    
    // some pointer practice
    int x = 5;
    //this pointer holds the value of x
    int* ptr = &x; // address of x
    std::cout << "Value of x is " << x;
    std::cout << " and the address is " << ptr; // you can use *ptr to show the value of x. in this case it is 5
    std::cout << "\n";
    // pointer for string, usually dont point to strings
    std::string name = "Stu";
    std::string* ptrToString = &name;
    std::cout << "Value of name is " << name;
    std:: cout << " and the address is " << ptrToString;
    
    //swap two numbers using pointers
    int num3 = 6;
    int num4 = 8;
    //NewSwap (&num3, num4);
    
    //c-style string
    const char *myName = "Nemo";
    
    //2d array
    int table[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j<5; j++){
            table[i][j] = i+j;
        }
    }
    
    /*
    can also write a 2d array as:
     int table [] **1 is inferred here** [3] = { {2,3,4}};
    
    */
    
    // how to print out char* argv[]?
    std::cout<< "\n";
    if (argc > 0) {
        //for (int i = 0; i < argc; i++){
            //std::cout << argv[i];
        std::string firstArgument = argv[0];
        std::cout << firstArgument;
        //}
    }
    return 0;
}
