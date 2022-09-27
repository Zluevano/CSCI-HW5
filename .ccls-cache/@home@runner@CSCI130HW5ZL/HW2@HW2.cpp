/*
Programmer: Zachary Luevano
Date: September 26, 2022

Description: Simply reads a txt file for data through a while loop that's
similar to a EOF though a EOF resulted in duplicating the last number. ALl this
does is add the numbers line by line aswell as performs a counter in the loop.
If a negative number is encountered it breaks or ends the loop and displays what
sum it could've.

*/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // Declare Variables:
  int dataTemp;       // Data read from txt.
  double sumData = 0; // Sum of all valid data.
  int counter = 0;    // Simple while counter.

  // Load input file
  ifstream inFile; // Declared stream variable
  inFile.open("NumberData1.txt");

  // Load all data in while loop
  //  while (inFile >> dataTemp) doesn't work because we are importing data as
  //  part of the loop.
  // (!inFile.eof() )
  while (inFile >> dataTemp) {
    cout << dataTemp << endl;

    // Check to see if data is valid IE negative or not
    if (dataTemp >= 0) {
      sumData = sumData + dataTemp;
      counter++;
    }

    // The value is negative and we should exit using break.
    else {
      cout << "Negative value encountered of " << dataTemp << "." << endl;
      cout << "Will not use rest of the data..." << endl;
      break;
    }
  }

  cout << "The sum of valid data is: " << sumData << endl;
  cout << "The number of valid data points is: " << counter << endl;
  cout << "The average of the valid data is: " << sumData / counter << endl;
  // You can also use << cout "Average data = " << (static_cast<double>(sumData)
  // /counter) << endl; to have a double value for this. You could also just
  // declare the variables as a double as this program isn't resource intensive
  // anyways.
}