/*
  Author: Will Yang 
  Date Creation: 1/26/2022
  Date Last Modified: 2/1/2022
  Purpose: The purpose of the program is to calculate to the total amount of change the user have. It will add up the value of pennies, nickels, dimes, quarters, and dollar coins the user inputs through the program. 
  coins.cpp
  From Ch2 of Big C++
  Takes number of different coins as input, computes, and prints total dollar value 
*/
  #include <iostream>
using namespace std;

int main()
{
    // declaring values of different coins 
    const double PENNY_VALUE = 0.01;
    const double NICKEL_VALUE = 0.05;
    const double DIME_VALUE = 0.10;
    const double QUARTER_VALUE = 0.25;
    
    // declaring variables corresponding to the number of different types of coins
    int pennies, nickels, dimes, quarters, dollars;
    double total = 0.0;

    cout << "How many pennies do you have ? ";             // To ask the user how many pennies do they have?
    cin >> pennies;
    // update total now
    total = total + pennies * PENNY_VALUE;
    cout << "Current total is " << total << endl;

    cout << "How many nickels do you have? ";             // To ask the user how many nickels do they have?
    cin >> nickels;
    // update total now
    total = total + nickels * NICKEL_VALUE;
    cout << "Current total is " << total << endl;

    cout << "How many dimes do you have? ";               // To ask the user how many dimes do they have?
    cin >> dimes;
    // update total now
    total = total + dimes * DIME_VALUE;
    cout << "Current total is " << total << endl;

    cout << "How many quarters do you have? ";            // To ask the user how many quarters do they have?
    cin >> quarters;
        // update total now
    total = total + quarters * QUARTER_VALUE;             
    cout << "Current total is " << total << endl;

    cout << "How many dollar coins do you have? ";        // To ask the user how many dollar coins do they have?
    cin >> dollars;
    // update total now
    total = total + dollars;
    cout << "Current total is " << total << endl;

    // Total value of the coins
    cout << "Total value = " << total << "\n";

    system("pause");    // to stop displaying unnessary stuff to the monitor
    return 0;           // to exit main function
}