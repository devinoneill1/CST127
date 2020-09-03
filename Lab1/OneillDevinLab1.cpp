// ----------------------------------------------------------------------------
// Name: Devin O'Neill, CST 127
// Program: Lab #1
// Due Date: 09/08/2020
//
// Program Description: Birthday IO with calculations
//
// Inputs: Integer values from console
//
// Outputs: Text and calculated values to console
//
// ----------------------------------------------------------------------------


#include <algorithm>
#include <iostream>   // tells the program to use the “standard” I/O devices
using namespace std;

int main(void)
{
	int day, month, year, sum, average, product, largest[3]; //variable declaration

	cout << "What day were you born? "; 
	cin >> day; // store user input to day
	cout << "What month were you born? "; 
	cin >> month; //store user input to month
	cout << "What year were you born? "; 
	cin >> year; //store user input to year
	cout << "Your date of birth is " << month << "/" << day << "/" << year << "\n\n";

	sum = day + month + year;		// add user input values
	average = sum / 3;				//averages values
	product = day * month * year;	//multiplies values
	
	//put user input values in comparator array then sorts array
	largest[0] = day;
	largest[1] = month;
	largest[2] = year;
	sort(begin(largest), end(largest));

	//Console output sequence
	cout << "Your birthdate has the following qualities: \n";
	cout << "Sum = " << sum << "\n";
	cout << "Average = " << average << "\n";
	cout << "Product = " << product << "\n";
	cout << "Largest = " << largest[2] << "\n";
	cout << "Smallest = " << largest[0] << "\n";

	return 0;
}
