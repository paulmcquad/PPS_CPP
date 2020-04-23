//****************************************
// SPECIFICATION File for class Deck
//****************************************
#ifndef DECK_HXX
#define DECK_HXX

#include "Card.hxx"
#include <deque>

class Deck
{
public:
  // Constructor
  Deck();
  // Observers
  bool empty() const;
  bool isThere(Card aCard) const;
  int size() const;
  // Action responsibilities
  void Shuffle(); // Reorders the cards
  Card Deal();    // Takes one card from deck
private:
  deque<Card> theDeck;
};

#endif