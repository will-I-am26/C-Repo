/*
  Author: Will Yang
  Creation Date: 1/19/2022
  Modification Date: 1/23/2022
  Purpose: This program is to print out "Hello World" and "My first CIS 150 program!" using cout statments. Also, to fix any errors in the code for question 1. 
*/

#include <iostream>     // This is to include the compiler directive iostream.  
using namespace std;    // This is to use normal C++ stuff from iostream.

int main()     //To start main function                            
{
	cout << "Hello World!" << endl;                     // To print out "Hello World!" and start on the next line
	cout << "My first CIS 150 program! " << endl;       // To print out "My first CIS 150 program!" and start on the next line 
	  
	system("pause");                                    // To stop displaying unnessary stuff to the monitor
	return 0;                                           // To exit main function
}