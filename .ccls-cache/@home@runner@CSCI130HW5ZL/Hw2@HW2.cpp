/*
Programmer: Zachary Luevano
Date: September 26, 2022
Description:

*/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  //Declare Variables:
  int dataTemp;
  
  // Load input file
  ifstream inFile; // Declared stream variable
  inFile.open("NumberData1.txt");

  // Load all data in while loop
  while (!inFile.eof()) {
  inFile >> dataTemp;
  cout << dataTemp << endl;
    
  }
}