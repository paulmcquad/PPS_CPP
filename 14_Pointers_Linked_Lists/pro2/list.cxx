//******************************************************************
// IMPLEMENTATION FILE (list.xx)
// This file implements the List class member functions
// List representation: A linked list with head and tail
// pointers, a length field, and a current position pointer.
// The iterator returns the items in order.
//******************************************************************
#include "list.hxx"
#include <iostream>
#include <cstddef> // For NULL

using namespace std;

typedef NodeType *NodePtr;
struct NodeType
{
  ItemType component;
  NodePtr link;
};

list::list()
// Post: dataPtr == NULL
{
  dataPtr = NULL;
  currentPos = dataPtr;
  length = 0;
  lastPtr = NULL;
}

//****************************************************************

void list::Insert(ItemType item)
// Post: New node containing item is in its proper place and
//       component members of list nodes are in ascending order

{
  NodePtr currPtr;    // Moving pointer
  NodePtr prevPtr;    // Trailing pointer
  NodePtr newNodePtr; // Pointer to new node

  newNodePtr = new NodeType;
  newNodePtr->component = item;

  if (dataPtr == NULL) // empty list
  {
    newNodePtr->component = NULL;
    dataPtr = newNodePtr;
    lastPtr = newNodePtr;
  }
  else
  { // Find previous insertion point
    currPtr = dataPtr;
    prevPtr = NULL;
    while (currPtr != NULL && currPtr->component < item)
    {
      prevPtr = currPtr;
      currPtr = currPtr->link;
    }

    // Insert new node
    newNodePtr->link = currPtr;
    if (prevPtr == NULL) // Insert as first?
      dataPtr = newNodePtr;
    else
      prevPtr->link = newNodePtr;
    if (currPtr == NULL) // Insert as last?
      lastPtr = newNodePtr;
  }
  length++;
}

//***************************************************************

void list::Delete(ItemType item)
{
  NodePtr prevPtr = NULL;    // Trailing pointer
  NodePtr currPtr = dataPtr; // Loop control pointer
  while (currPtr != NULL && currPtr->component != item && currPtr->component < item)
  {
    prevPtr = currPtr;
    currPtr = currPtr->link;
  }
  if (currPtr != NULL && currPtr->component == item)
  { // item is found
    if (currPtr == dataPtr)
      dataPtr = currPtr->link; // item is in first node
    else
      prevPtr->link = currPtr->link;
    if (currPtr == lastPtr)
      lastPtr = prevPtr; // item is in last node
    delete currPtr;
    length--;
  }
}

//***************************************************************

void list::ResetList()
{
  currentPos = dataPtr;
}

//***************************************************************

ItemType list::GetNextItem()
{
  ItemType item;
  item = currentPos->component;
  currentPos = currentPos->link;
  return item;
}

//***************************************************************

int list::GetLength() const
{
  return length;
}

//***************************************************************

bool list::IsEmpty() const
{
  return (dataPtr == NULL);
}

//***************************************************************

bool list::HasNext() const
{
  return (currentPos != NULL);
}

//***************************************************************

bool list::IsFull() const
{
  return false;
}

//***************************************************************

bool list::IsThere(ItemType item) const
{
  NodePtr currPtr = dataPtr; // Loop control pointer

  while (currPtr != NULL && currPtr->component != item && currPtr->component < item)
    currPtr = currPtr->link;

  if (currPtr != NULL && currPtr->component == item)
    return true;
  else
    return false;
}

//***************************************************************

list::list(const list &otherList)
{
  NodePtr fromPtr; // Pointer into list being copied from
  NodePtr toPtr;   // Pointer into new list being built

  if (otherList.dataPtr == NULL)
  {
    dataPtr = NULL;
    return;
  }
  // Copy first node
  fromPtr = otherList.dataPtr;
  dataPtr = new NodeType;
  dataPtr->component = fromPtr->component;
  // Copy remaining nodes
  toPtr = dataPtr;
  fromPtr = fromPtr->link;
  while (fromPtr != NULL)
  // Copying nodes from original to duplicate
  {
    toPtr->link = new NodeType;            // Store new node in link of last
                                           // node added to new list
    toPtr = toPtr->link;                   // toPtr points to new node
    toPtr->component = fromPtr->component; // Copy component to new node
    fromPtr = fromPtr->link;               // fromPtr points to next node
                                           // of original list
  }
  toPtr->link = NULL;
  lastPtr = toPtr; // Set last pointer
}

//************************************************************

list::~list()
{
  NodePtr tempPtr;
  NodePtr currPtr = dataPtr;
  while (currPtr != NULL)
  {
    tempPtr = currPtr;
    currPtr = currPtr->link;
    delete tempPtr;
  }
}
