//****************************************
// SPECIFICATION File for class Values
//****************************************
#ifndef VALUES_HXX
#define VALUES_HXX

#include <string>
using namespace std;

class Values
{
public:
  // Constructors
  Values();
  Values(string initString);
  Values(int initInt);
  // Observers
  string toString() const;
  int toInt() const;
  // Relational operators
  bool operator<(Values otherValue) const;
  bool operator==(Values otherValue) const;

  enum Value
  {
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
  };

private:
  Value myValue;
};

#endif