//
//  main.cpp
//  CommandLineArgs
//
//  Created by Stuart Kirkham on 9/2/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    if (argc > 0) {
        for (int i = 0; i < argc; i++){
        std::cout << argv[i];
        std::string firstArgument = argv[0];
        std::cout << firstArgument;
        }
    }

    return 0;
}
