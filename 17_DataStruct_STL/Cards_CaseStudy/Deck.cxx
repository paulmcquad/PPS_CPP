//******************************************************
// IMPLEMENTATION FILE for class Deck
//******************************************************

#include "Deck.hxx"
#include <algorithm>

Deck::Deck()
{
  for (Suits::Suit suit = Suits::CLUBS;
       suit <= Suits::SPADES; suit = Suits::Suit(suit + 1))
    for (Values::Value value = Values::ACE;
         value <= Values::KING; value = Values::Value(value + 1))
      theDeck.push_back(Card(Values(value), Suits(suit)));
}

//******************************************************

bool Deck::empty() const
{
  return theDeck.empty();
}

//******************************************************

bool Deck::isThere(Card aCard) const
{
  return find(theDeck.begin(), theDeck.end(), aCard) != theDeck.end();
}

//******************************************************

int Deck::size() const
{
  return theDeck.size();
}

//******************************************************

void Deck::Shuffle()
{
  random_shuffle(theDeck.begin(), theDeck.end());
}

//******************************************************

Card Deck::Deal()
{
  Card next = theDeck.front(); // Get the next card
  theDeck.pop_front();         // Delete it from the deck
  return next;                 // Return it
}
