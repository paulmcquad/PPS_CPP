//******************************************************************
// Chessboard program
// This program prints a chessboard pattern that is built up from
// basic strings of white and black characters.
//******************************************************************

#include <iostream>
#include <string>

using namespace std;

string blackRow(int n);

string whiteRow(int n);

const string BLACK = "********"; // Define a line of a black square
const string WHITE = "        "; // Define a line of a white square

int main()
{
  // Print five white-black
  whiteRow(5);

  // Print five black-white rows
  blackRow(5);

  // Print five white-black rows
  whiteRow(5);

  // Print five black-white rows
  blackRow(5);

  // Print five white-black rows
  whiteRow(5);

  // Print five black-white rows
  blackRow(5);

  // Print five white-black rows
  whiteRow(5);

  // Print five black-white rows
  blackRow(5);

  return 0;
}

string blackRow(int n)
{

  string blackRow; // A row beginning with a black square

  // Create a black-white row by concatenating the basic strings
  blackRow = BLACK + WHITE + BLACK + WHITE +
             BLACK + WHITE + BLACK + WHITE;

  for (int i = 0; i < n; i++)
  {
    cout << blackRow << endl;
  }
}

string whiteRow(int n)
{
  string whiteRow; // A row beginning with a white square

  // Create a white-black row by concatenating the basic strings
  whiteRow = WHITE + BLACK + WHITE + BLACK +
             WHITE + BLACK + WHITE + BLACK;

  for (int i = 0; i < n; i++)
  {
    cout << whiteRow << endl;
  }
}