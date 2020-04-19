//******************************************************************
// SPECIFICATION FILE (list.hxx)
// This file gives the specification of a list abstract data type.
// The list components are not assumed to be in order by value.
//******************************************************************

const int MAX_LENGTH = 100; // Maximum number of components
typedef int ItemType;       // Type of each component

class List
{
public:
  // Action respnsibilities
  bool IsEmpty() const;
  // Post: Returns true if list is empty; false otherwise
  bool IsFull() const;
  // Post: Returns true if list if full; false otherwise
  void Insert(ItemType item);
  // Pre:  List is not full and item is not in the list
  // Post: item is in the list and length has been incremented
  void Delete(ItemType item);
  // Post: item is not in the list
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
  void Sort();
  // Post: List items have been put into ascending order either alphabetical
  //       or numeric depending on ItemType.

  // Knowledge responsibility
  int GetLength() const;
  // Post: Returns the length of the list

  List();
  // Constructor
  // Post: Empty list has been created

private:
  int length;
  int currentPos;
  ItemType data[MAX_LENGTH];
};
