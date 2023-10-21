/*
Author: Will Yang
Date Created: 2/3/2022
Date Last Modified: 2/8/2022
Purpose: The purpose of the program is to calculate the roots of a quadratic equations. It will compute no roots, 
one real roots, or two real roots. It will compute roots by taking the numbers the user inputs.
*/

// include iostream, cmath, and iomanip library using normal C++ stuff
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//start of the main function
int main()
{
	// declaring varibles as double
	double a;
	double b;
	double c;
	double root1;
	double root2;

	// asking the user to enter in 3 numbers that are represented as coefficients in the quadratic equation
	cout << "Enter a, b and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0 : ";
	cin >> a >> b >> c;
	

	// an if statement to check if the variable "num1" is equal to 0 or the discriminant is less than 0 
	if (a == 0 || ((pow(b, 2.0)) - (4 * a * c)) < 0)
	{
		// display there is "No real root" to the user
		cout << "No real root" << endl;
	}
	// an else if statement to check if the discriminant is equal to 0
	else if ((pow(b, 2.0) - (4 * a * c)) == 0)
	{
		// calculates the one real root of the quadratic equation
		root1 = ((-1.0 * b) + sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);
		
		// display to the user that "there is only one real root"
		cout << "There is only one real root: " << fixed << setprecision(6) << root1 << endl;
	}
	// an else statment if the condition are not met above 
	else
	{
		// calculates the two real roots
		root1 = ((-1.0 * b) + sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);

		root2 = ((-1.0 * b) - sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);

		// displays root1 and root2 to the user
		cout << "Root1 is " << fixed << setprecision(6) << root1 << endl;
		cout << "Root2 is " << fixed << setprecision(6) << root2 << endl;
	}
	 
	// to stop displaying unnecessary stuff to the user and exit the program
	system("pause");
	return 0;
}