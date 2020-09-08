// ----------------------------------------------------------------------------
// Name: Devin O'Neill
// Program: Lab 2 A
// Due Date: 9/22/2020
//
// Program Description: Calculates force equation
//
// Inputs: Distance(cm), 2 mass values(kg)
//
// Outputs: Formatted answer
//
// ----------------------------------------------------------------------------




#include <iostream>   /// tells the program to use the “standard” I/O devices
#include <iomanip>
using namespace std;

int main(void)
{
    // Variable declarations
    double const k = 6.67e-8;
    double distance, mass1, mass2, force;

    // Prompts user for input, stores inputs to values
    cout << "What is the distance between two bodies in cm? : ";
    cin >> distance;
    cout << "\nWhat is the mass of two bodies? Enter simultaneously two values in grams. : ";
    cin >> mass1 >> mass2;

    //Calculates force
    force = k * ((mass1 * mass2) / distance);

    // Outputs to console
    cout << setprecision(2) << fixed;
    cout << "\nThe force between " << mass1 << " gr and " << mass2 << " gr at a distance of " << distance << " cm is ";
    cout << scientific << force << endl;


	return 0;
}
