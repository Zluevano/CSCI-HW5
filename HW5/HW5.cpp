/*
Programmer - Zachary Luevano
Date - September 26, 2022

Description: Super simple program that just has two inputs the cost and the number of lawns, using a for loop it determines how long to run a if loop. From there it loops with two repeating inputs, a Length and width that is added up using += at the end it simply multiplies that total area by the cost to find the grand total.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
cout << setprecision(10) << fixed;
//Declare Variables:
double c;
int lawns;
double Area;

//Input Variables:
cin >> c;
cin >> lawns;

for (int i = 0; i < lawns; i++)
  {
  double l, w;
  cin >> l;
  cin >> w;
  Area += l*w;
  }
cout << Area * c << endl;
  }