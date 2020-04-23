//****************************************
// SPECIFICATION File for class Card
//****************************************
#ifndef CARD_HXX
#define CARD_HXX

#include "Values.hxx"
#include "Suits.hxx"
class Card
{
public:
  // Constructors
  Card();
  Card(Values initValue, Suits initSuit);
  // Observers
  Values GetValue() const;
  Suits GetSuit() const;
  // Relational operators
  bool operator<(const Card &otherCard) const;
  bool operator>(const Card &otherCard) const;
  bool operator==(const Card &otherCard) const;
  bool operator<=(const Card &otherCard) const;
  bool operator>=(const Card &otherCard) const;
  bool operator!=(const Card &otherCard) const;

private:
  Values myValue;
  Suits mySuit;
  int rank() const; // Helper function for relational ops
};

#endif