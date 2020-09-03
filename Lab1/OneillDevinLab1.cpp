// ----------------------------------------------------------------------------
// Name: Devin O'Neill, CST 127
// Program: Lab #1
// Due Date: 09/08/2020
//
// Program Description: Hello world in C++
//
// Inputs: None
//
// Outputs: "Hello, World" to console
//
// ----------------------------------------------------------------------------




#include <iostream>   /// tells the program to use the “standard” I/O devices
using namespace std;
int main(void)
{
	string inputNameString;
	cout<<"Who are you?\n";
	std::cin >> inputNameString;
	cout<<"Hello, "<< inputNameString<<"!\n";
	return 0;
}
