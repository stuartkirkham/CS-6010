//
//  main.cpp
//  PoliStructs
//
//  Created by Stuart Kirkham on 8/30/22.
//

#include <iostream>
#include <string>
#include <vector>
struct politician {
    std::string name;
    std::string party;
    std::string poliLevel;
};
//Write a function named Javacans that takes a vector of politicians and returns a vector with only the politicians from the input that are Javacans.

std::vector<politician> Javacans(std::vector<politician> politicianList) {

// We need a place to store the information that we are returning
    
    std::vector<politician> JavaNum;

// Check for political affiliation
    
    for (politician joe : politicianList) {
        if (joe.party == "Javacan"){
            JavaNum.push_back(joe);
        }
    }
    return JavaNum;
}
//Write a function named federalCplusers that takes a vector of politicians as a parameter and returns a list of the federal Cplusers from the input.

std::vector<politician> federalCplusers(std::vector<politician> politicianList) {

// We need a place to store the information that we are returning
    
    std::vector<politician> cPluserNum;
// Check for political affiliation
    
    for (politician joe : politicianList) {
        if (joe.party == "Cpluser" && joe.poliLevel == "federal"){
            cPluserNum.push_back(joe);
        }
    }
    return cPluserNum;
}

int main(){
    // write a set of tests for these structures.
    std::vector<politician> politicianList;
    politician joe;
    joe.name = "Joe Biden";
    joe.party = "Javacan";
    joe.poliLevel = "federal";
    politicianList.push_back(joe);
    std::vector<politician> javs =  Javacans(politicianList);
    std::vector<politician> cplus = federalCplusers(politicianList);
   // print number of politicians
    // Test for incorrect input for party
    if (joe.party != "Cpluser" && joe.party != "Javacan"){
        std::cout << "Invalid party \n";
    }
    // test for incorrect input for political level
    else if (joe.poliLevel != "federal" && joe.poliLevel != "state"){
        std::cout << "Invalid level of politician (federal or state) \n";
    }
    else {
        for( politician joe : javs) {
            std::cout << "Current Javacans: " << joe.name;
            std:: cout << "\n";
        }
        for( politician joe : cplus) {
            std::cout << "Current Cplusers: " <<joe.name;
            std:: cout << "\n";
        }
    }
    
    return 0;
}
