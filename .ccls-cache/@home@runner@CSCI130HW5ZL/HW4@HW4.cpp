#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  int input;
  int output = 0;
  int total;
  int temp_int;
  int unique; // # of unique answers
  int a, b, c;

  cin >> a >> b >> c;

  int mod = 42;
    a = a % mod;
    b = b % mod;
    c = c % mod;
  
  if ((a != b) && (a != c))
    output ++;
  else if ((a == b) && (a == c))
    output ++;
  else if ((a == b) || (a == c))
    output ++;
  
    cout << output << endl;

  if ((b != a) && (b != c))
    output ++;
  else if ((b == a) && (b == c))
    output ++;
  else if ((b == c) || (b == c))
  output ++;
  cout << output << endl;

  if ((c != a) && (c != b))
    output ++;
  else if ((c == a) && (c == b))
    output ++;
  else if ((c == b) || (c == a))
  // This is the last step in the equation so it has a output = output, if it were to be output ++ it would result in a incorrect part for c. If C is equal a or b it wouldn't add right as this was alerady declared earlier on.
    output = output;
  cout << output << endl;

  if ((a == b) && (a == c))
    output = 1;
    cout << output << endl;


  
  cout << endl;
  if (output <= 0)
    cout << "One " << endl;
  else
  cout << output << endl;
  }
/*
  for (int i = 0; i <= 10; i++) {
    cin >> input;

    output = input % 42;

    cout << output;
    cout << endl;
  }
}


Apologize please disregard the prior email, I had just decided it best to complete it before I went to sleep as to not have any discourse from asking so late.

With Regards,

Zachary Luevano
*/

