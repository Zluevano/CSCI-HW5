#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// WCI = K1 + 0.6125 Ta - K2*Ws^0.16 + K3TaWS^0.16
// Ws = WCI
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
   // Ws = 5;
    for (int j = 0; j < 3; j++) // Start of Inner Loop
    {
      WCI = ((K1 + 0.6125 * Ta) - (K2 * pow(Ws, 0.16) + (K3 * Ta * pow(Ws, 0.16))));
      cout << "Temp = " << Ta << endl;
      cout << "Wind = " << Ws << endl;
      cout << "WCI = " << WCI << endl;
      cout << endl;
      Ta = Ta + 4;
    } // End of inner loop
    Ws = Ws + 2;
  } // End of outer loop
}
/*
for (int j = i; j < 4; j++)
Ws = Ws +2;


}
  }


//*/

/*
cout << "Temp: " << "Wind Speed: " << "WCI:"<< endl;
cout << setw(2) << Ta;
cout << setw(10) << Ws;
cout << setw(15) << WCI;



for (int j = i; j < 4; j++){
Ws = Ws +2;
   cout << "Temp = " << Ta << " Wind = " << Ws << " WCI = " << WCI << endl;
*/