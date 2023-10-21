/*
Author: Will Yang
Date Created: 2/3/2022
Date Last Modified: 2/8/2022
Purpose: The purpose of this program is to add one to a number the user inputs or mulitply it by two. Then have a y value equal to 
the number the user inputs added by the number the user inputs minus 7 or have the number the user inputs mulitply by itself plus seven. 
Then display what x or y equals.
*/

// include the iostream library 
#include <iostream>  

// using normal C++ stuff
using namespace std; 

// Start of the main function
int main()  
{
	// initialize the variables x and y as integer data types
	int x, y;  

	//display a messege to the user to enter an integer value
	cout << "Please enter an integer value : "; 
	
	// where the user will enter an integer value
	cin >> x;                                   
	
	// An if statment to see if x is greater than or equal to fifteen
	if (x >= 15)                                
	{
		// to add one to x and assign it a new value
		x++;              
		
		// to assign y equal to x plus x - 7
		y = x + x - 7;   
	}
	 // an else statement to execute if the condition of the if statment are not met
	else                 
	{
		// to assign x to x multiply by two
		x = x * 2;       
		
		// to assign y to x multiply by x plus 7 
		y = x * x + 7;   
	}
	// to display the x and y value to the user
	cout << "x = " << x << " y = " << y << endl;   

	// to stop displaying unecessary stuff to the monitor 
	system("pause");    
	
	// to exit program
	return 0;
}