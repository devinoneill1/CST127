// ----------------------------------------------------------------------------
// Name: Devin O'Neill
// Program: Lab 2 B
// Due Date: 9/22/2020
//
// Program Description: Calculates time from distance and gravity
//
// Inputs: None
//
// Outputs: Formatted answer
//
// ----------------------------------------------------------------------------


#include <iostream> //standart IO
#include <cmath> //advanced math operations
using namespace std;

int main(){

    //Sets variables
    int height = 800;
    double time;
    double const g = 32.2;

    //Calculates
    time = sqrt((2*height)/g);

    //Outputs to console
    cout << "It will take " << time << " seconds to fall " << height << " feet." << endl;

    return(0);
}
