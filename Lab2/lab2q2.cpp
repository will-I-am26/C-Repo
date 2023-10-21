/* 
Author: Will Yang
Date Creation: 1/26/2022
Date Last Modified: 2/1/2022
Purpose: The purpose of the program is to calculate the sum of two integers that the user inputs.   
*/

#include <iostream>          // include the compiler directive iostream
using namespace std;         // for iostream to give normal C++ stuff

int main()     // start of the function
{
	int num1, num2, sum;         // declare integer data type for the varibles  

	cout << "Please enter an integer: ";         // ask the user to input an integer 
	cin >> num1;
	
	cout << "Please enter another integer: ";    // ask the user to input another integer
	cin >> num2;

	sum = num1 + num2;                                             // calculates the sum of two integers the user input 
	cout << "The sum of the integers is: " << sum << endl;         // displays the sum of the two integers to the user 
	 
	system("pause");       // to stop displaying unnessary stuff to the monitor
	return 0;              // to exit main function

}