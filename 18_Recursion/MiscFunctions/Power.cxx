//******************************************************************
// Exponentiation program
//******************************************************************
#include <iostream>
using namespace std;

int Power(int x, int n);

int main()
{
  int number;   // Number that is being raised to power
  int exponent; // Power the number is being raised to

  cin >> number >> exponent;
  cout << Power(number, exponent); // Nonrecursive call
  return 0;
}

//******************************************************************

int Power(int x, int n)
// Computes x to the n power by multiplying x times the result of
// computing x to the n – 1 power

// Pre: n > 0
{
  if (n == 1)
    return x; // Base case
  else
    return x * Power(x, n - 1); // Recursive call
}
