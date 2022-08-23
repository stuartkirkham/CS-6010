//write a program that computes the set of fewest coins possible to return a customer's change after purchasing something from a vending machine. The program should prompt the user to enter the item price, then again to enter the amount paid. It should then report the total amount of change to return after vending an item of that price, and also report the number of quarters, dimes, nickels, and pennies that make up that quantity. The set of coins returned should be such that it is the fewest number of coins possible, e.g., if returning 15 cents, it should return 1 dime and 1 nickel (2 coins total). It should not return 3 nickels, or 15 pennies, or 1 dime and 5 pennies, or ...
//Important: Assume the user will input the price and paid amounts as a number of cents (int).
//  Created by Stuart Kirkham on 8/23/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // find item price and amount paid, as well as change
    std::cout << "Enter item price in cents: \n";
    int VendingPrice;
    std::cin >> VendingPrice;
    std::cout << "\nEnter amount paid in cents: \n";
    int AmountPaid;
    std::cin >> AmountPaid;
    int change = AmountPaid - VendingPrice;
    std::cout << "Change: " << change << " cents\n";
    //now dissect into number of coins
    int quarters = change/25;
    std::cout<< "Quarters: " << quarters << "\n";
    int dimes = change%quarters;
    std::cout<< "Dimes: " << dimes << "\n";
    
    
    
    
    
    return 0;
}
