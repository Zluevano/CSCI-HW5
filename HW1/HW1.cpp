/*
Programmer: Zachary Luevano
Date: September 26, 2022

Description: Rather simple program that just reads a file through two processes a string for a name and then a test result, the program is only concerned over test results, so it goes line by line in a while loop (EOF) that updates as it adds the + test results (1) and adds to a counter for the total number of patients tested. This program also tests principles on outputs to another file.
*/
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Declare Variables
  string firstName;
  string date;
  int TestResult;
  int count = 0;
  double cumulative_cases = 0;

  // Declare Stream Variables
  ifstream inFile;  // Needed to access file to load.
  ofstream outFile; // Needed to save results of analysis

  // Open the input file.
  inFile.open("TestResultsData.dat");

  // Open the output file.
  outFile.open("AnalyzedData.txt");

  // Read in the date - first line of code or file.
  inFile >> date;
  cout << date << endl;
  outFile << date << endl;

  while (!inFile.eof()) {
    // Read in the next line - Must read then output or RAM will be read.
    inFile >> firstName;
    inFile >> TestResult;

    // Update number of cases and persons tested
    cumulative_cases = cumulative_cases + TestResult;
    count++;
  }
  // Display to console
  cout << "Total number of cases = " << cumulative_cases << endl;
  cout << "Number of persons tesed = " << count << endl;

  // Display to output file and set conditions for precision of decimals
  outFile << fixed << showpoint << setprecision(2);
  outFile << "Total number of cases = " << cumulative_cases << endl;
  outFile << "Number of persons tesed = " << count << endl;
  outFile << "The prevalence is ";
  // You don't need to specify the static case here again but just noted.
  outFile << ((static_cast<double>(cumulative_cases)) / count) * 100;
  outFile << "%" << endl;
  outFile << endl;
  outFile
      << "If a test result is changed from a int to a char it bugs out. That "
         "is it doesn't display anything past the date which is a string so "
         "that wouldn't be affected, this is relevant if it's a blank space or "
         "a char for the test result, this isn't a bool as if you had 5 for a "
         "input it would assume 5 positive cases for one person aswell.";

  // Close input and output file
  inFile.close();
  outFile.close();
}