#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
// WCI = K1 + 0.6125 Ta - K2*Ws^0.16 + K3TaWS^0.16
// Ws = WCI
int main()
{
double Ta; // Measured Temp
double Ws; // Wind Speed
double WCI; //Caculated Wind Speedd Index
double K1 = 13.12; //First conversion Factor
double K2 = 11.37; //Second Conversion Factor
double K3 = 0.3965; // Third Conversion Factor

cout << "Enter Measured Temp" << endl;
cin >> Ta;
cout << "Enter Measured Wind Speed" << endl;
cin >> Ws;

for (int i = 0; i < 3; i++){
cout << "Temp = " << Ta << endl;
cout << "Wind Speed = " << Ws << endl;
WCI = ((K1 + 0.6125 * Ta) - (K2 * pow(Ws, 0.16) + (K3 * Ta * pow(Ws, 0.16))));
Ta = Ta + 4;
cout << WCI << endl;

 /*
for (int j = 0; j < 4; j++){
cout << Ws << endl;
Ws = Ws +2;
}
//*/
  }
  }