/*
Author: Will Yang
Date Created: 2/3/2022
Date Last Modified: 2/8/2022
Purpose: The purpose of the program is to calculate the gross pay of the user. It will also calculate the gross pay if the user did overtime.   
*/

// include the iostream library
#include <iostream>
// using normal C++ stuff
using namespace std;

// start of the main function 
int main()
{
	// declaring variables "hours", "payRate", and "grossPay" as double.  
	double hours;
	double payRate;
	double grossPay;

	// asking the user to enter their hours and pay rate
	cout << "Enter the hours worked and the pay rate: ";
	cin >> hours >> payRate;

	// to calculate the gross pay of the user. It will also calculate the gross pay if the user worked overtime 
	if (hours <= 40)
	{
		grossPay = hours * payRate;
	}
	else
	{
		grossPay = (40.0 * payRate) + ((hours - 40.0) * (payRate * 1.5));
	}
	
	// display to the user their gross pay
	cout << "Gross pay for the week is $" << grossPay << endl;
	


	// to stop displaying unnecessary stuff to the user
	system("pause");
	
	// to exit program
	return 0;
}