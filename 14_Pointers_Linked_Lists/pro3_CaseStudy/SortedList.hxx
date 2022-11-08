//******************************************************************
// SPECIFICATION FILE (SortedList.h)
// This file gives the specification of a list abstract data type.
// The list components are assumed to be in order by value.
// The implementation uses a linked structure.
//******************************************************************
#include "Entry.hxx"

typedef Entry ItemType; // Type of each component
struct NodeType;        // Forward declaration
class SortedList
{
public:
  SortedList();
  // Constructor
  // Post: Empty list has been created
  ~SortedList();
  // Destructor
  // Post: All nodes are returned to the heap
  SortedList(const SortedList &otherList);
  // Copy constructor
  // Post:  A deep copy of otherList is created and dataPtr is the
  //        external pointer to this copy

  // Action respnsibilities
  void Insert(ItemType item);
  // Pre:  List is not full and item is not in the list
  // Post: item is in the list and length has been incremented
  void Delete(ItemType item);
  // Post: item is not in the list
  void ResetList();
  // The current position is reset to access the first item in the list
  ItemType GetNextItem();
  // Assumptions:  No transformers are called during the iteration.
  // There is an item to be returned; that is, HasNext is true when
  // this method is invoked
  // Pre:  ResetList has been called if this is not the first iteration
  // Post: Returns item at the current position.

  // Knowledge responsibility
  int GetLength() const;
  // Post: Returns the length of the list
  bool IsEmpty() const;
  // Post: Returns true if list is empty; false otherwise
  bool IsFull() const;
  // Post: Returns true if list if full; false otherwise
  bool IsThere(ItemType item) const;
  // Post: Returns true if item is in the list and false otherwise
  bool HasNext() const;
  // Returns true if there is another item to be returned; false
  // otherwise
private:
  NodeType *dataPtr; // Pointer to the first node in the list
  int length;
  NodeType *currentPos; // Pointer to the current position in a traversal
  NodeType *lastPtr;
};
