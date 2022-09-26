/*
Programmer - Zachary Luevano
Date - September 26, 2022
Description - The book didn't specify on inputs though that does seem inherently more useful rather than messing around with code.
Any how, it takes two values an inital 5 for wind speed (Ws) and in the loop (2 for Celsius) (Ta) it then performs a if loop 4 times for 4 tables, firstly it adds 4 to Ta and performs the formula listed below, the loop condition states for 3 times, it then reruns through another if loop that adds two to Ws, and then reruns the first if loop that again takes the condition, it does thing four times till Ws = 11 and in increments of 2, 6 and 10.

All of this is displayed in a table!

Lastly math was verified on mathway.com
*/
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  double Ta;          // Measured Temp
  double Ws;          // Wind Speed
  double WCI;         // Caculated Wind Speedd Index
  double K1 = 13.12;  // First conversion Factor
  double K2 = 11.37;  // Second Conversion Factor
  double K3 = 0.3965; // Third Conversion Factor

Ws = 5;
  
  for (int i = 0; i < 4; i++) // Start of outer loop
  {
    Ta = 2; 
    // The reason for including this just here is because It will always start at     2 when it repeats the loop, the Ws is seperated as it will always assume it's     = 5 as the first loop comes first. Atleast this is what I think I honestly        have zero clue.
    // That first loop is the Ta + 4 and has no condition for Ws which is included in the second loop.
    for (int j = 0; j < 3; j++) // Start of Inner Loop
    {
      WCI = ((K1 + 0.6125 * Ta) - (K2 * pow(Ws, 0.16) + (K3 * Ta * pow(Ws, 0.16))));
      cout << "Temp:   " << "   Wind:   " << "   WCI   " << endl;
      cout << Ta << "C";
      cout <<setw(11) << Ws << "Km";
      cout <<setw(14) << WCI << endl;
      
      Ta = Ta + 4;
    } // End of inner loop
    Ws = Ws + 2;
    cout << endl;
  } // End of outer loop
  return 0;
}