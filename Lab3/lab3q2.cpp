/*
Author: Will Yang
Date Created: 2/3/2022
Date Last Modified: 2/8/2022
Purpose: The purpose of this program is to ask the user their name and age. Then consider if 
the user is able to vote or not and display voting status.
*/

// include iostream library 
#include <iostream>

// include string library
#include <string>

// using normal C++ stuff
using namespace std;

//start main function 
int main()
{
	// declare variable "name" as string data type
	string name;
	
	// declare variable "age" as a integer data type
	int age;

	// asking the user for their name
	cout << "Please enter your first name: ";
	cin >> name;

	// asking the user for their age 
	cout << "Please enter your age: ";
	cin >> age;

	// An if else statement to determine to display a message to the user depending on their age
	if (age >= 18)
	{
		// displaying a message to the user if they are 18 and older
		cout << "Congratulations " << name << "! Your vote registration was successfully processed." << endl;
	}
	else
	{
		// displaying a message to the user if they are not 18 and older
		cout << "You are not eligible to vote " << name << "." << endl;
	}
	
	// to stop displaying unecessary stuff to the monitor
	system("pause");
	
	// to exit the program
	return 0;

}