//******************************************************************
// SPECIFICATION FILE (Sortedlist.hxx)
// This file gives the specification of a SortedList abstract data
// type. The components are assumed to be in order by value.
//******************************************************************

#include <string>
const int MAX_LENGTH = 100; // Maximum number of components
using namespace std;
typedef string ItemType; // Type of each component

class SortedList
{
public:
  // Action respnsibilities
  bool IsEmpty() const;
  // Post: Returns true if list is empty; false otherwise
  bool IsFull() const;
  // Post: Returns true if list if full; false otherwise
  void Insert(ItemType item);
  // Pre:  List is not full, item is not in the list, and
  //       the list items are sorted in ascending order
  // Post: item is in the list, length has been incremented, and
  //       the list items are sorted in ascending order
  void Delete(ItemType item);
  // Pre:  The list items are sorted in ascending order
  // Post: item is not in the list and the list items are sorted
  //       in ascending order
  bool IsThere(ItemType item) const;
  // Post: Returns true if item is in the list and false otherwise
  void ResetList();
  // The current position is reset to access the first item in the list
  bool HasNext() const;
  // Returns true if there is another item to be returned; false
  // otherwise

  ItemType GetNextItem();
  // Assumptions:  No transformers are called during the iteration.
  // There is an item to be returned; that is, HasNext is true when
  // this method is invoked
  // Pre:  ResetList has been called if this is not the first iteration
  // Post: Returns item at the current position.
  // Knowledge responsibility

  int GetLength() const;
  // Post: Returns the length of the list

  SortedList();
  // Constructor
  // Post: Empty list has been created

private:
  int length;
  int currentPos;
  ItemType data[MAX_LENGTH];
  void BinarySearch(ItemType item, bool &found, int &position) const;
};
