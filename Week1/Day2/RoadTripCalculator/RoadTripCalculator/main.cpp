//
//  main.cpp
//  RoadTripCalculator
//
//  Created by Stuart Kirkham on 8/23/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    //find driving distance
    int MilesOfTrip;
    float MPG;
    float CostOfGas;
    std::cout << "What is the Driving Distance of your trip?\n";
    std::cin >> MilesOfTrip;
    std::cout << "What is the MPG of your vehicle?\n";
    std::cin >> MPG;
    std::cout << "What is the cost of gas, in dollars per gallon?\n";
    std::cin >> CostOfGas;
    float NumOfGallons = (MilesOfTrip / MPG);
    std::cout << "The total number of gallons needed for your trip is: " << NumOfGallons << "\n";
    float TotCost = (NumOfGallons * CostOfGas);
    std::cout << "The total cost of your trup is: " << TotCost << "\n";
    
    return 0;
}
