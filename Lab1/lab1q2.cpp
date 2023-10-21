/*
  Author: Will Yang
  Creation Date: 1/19/2022
  Last Modification Date: 1/23/2022
  Purpose: To have the user enter their first name. Then to display a message to the user using the name they enter in.
*/

#include <iostream>   // To include the compiler directive iostream.
#include <string>     // To include the compiler directive string.
using namespace std;  // To give standard C++ stuff from the library.

int main()    // To start the main function.
{

	string first;     // Declaring a string data type named "first".

	
	cout << "Please enter your first name: " << endl;    // To print out "Please enter your first name" and start on a new line.
	cin >> first;                                        //Where the user will enter their first name.

	
	cout << "Hi " << first << ": I hope you will enjoy CIS 150 this semester." << endl;      // To print out message to the user using the their first name.

	system("pause");       // To stop displaying unnessary stuff to the monitor.
	return 0;              // To exit main function.
}