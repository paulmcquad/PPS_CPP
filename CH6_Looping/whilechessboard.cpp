//******************************************************************
// Chessboard program - while Loop
// This program prints a chessboard pattern that is built up from
// basic strings of white and black characters.
//******************************************************************

#include <iostream>
#include <string>

using namespace std;

string completeRow(char Type, int n);

int main()
{
  int loopCount = 0;

  while (loopCount < 4)
  {
    // Print five white-black rows
    completeRow('W', 5);

    // Print five black-white rows
    completeRow('B', 5);

    loopCount++;
  }

  return 0;
}

// Prints (Type: W - White Rows / B - Black Rows) n - many times row
string completeRow(char Type, int n)
{

  string pattern;

  const string BLACK = "********"; // Define a line of a black square
  const string WHITE = "        "; // Define a line of a white square

  switch (Type)
  {
  case 'W':
    // Create a white-black row by concatenating the basic strings
    pattern = WHITE + BLACK + WHITE + BLACK +
              WHITE + BLACK + WHITE + BLACK;
    break;

  case 'B':
    // Create a black-white row by concatenating the basic strings
    pattern = BLACK + WHITE + BLACK + WHITE +
              BLACK + WHITE + BLACK + WHITE;

  default:
    break;
  }

  for (int i = 0; i < n; i++)
  {
    cout << pattern << endl;
  }
}