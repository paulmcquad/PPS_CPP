//******************************************************************
// IMPLEMENTATION FILE (list.cxx)
// This file implements the List class member functions
// List representation: a one-dimensional array and a length
//                      variable
//******************************************************************
#include "list.hxx"
#include <iostream>

using namespace std;

// Private members of class:
//    int length;               Length of the list
//    int currentPos
//    ItemType data[MAX_LENGTH];     Array holding the list items

//******************************************************************

List::List()
{
  length = 0;
  currentPos = 0;
}

//******************************************************************

bool List::IsEmpty() const
{
  return (length == 0);
}

//******************************************************************

bool List::IsFull() const
{
  return (length == MAX_LENGTH);
}

//******************************************************************

int List::GetLength() const
{
  return length;
}

//******************************************************************

void List::Insert(ItemType item)
{
  data[length] = item;
  length++;
}

//******************************************************************

void List::Delete(ItemType item)
{
  int index = 0; // Index variable
  while (index < length && item != data[index])
    index++;
  if (index < length)
  { // Remove item
    data[index] = data[length - 1];
    length--;
  }
}

//******************************************************************

bool List::IsThere(ItemType item) const
{
  int index = 0; // Index variable
  while (index < length && item != data[index])
    index++;
  return (index < length);
}

//******************************************************************

void List::ResetList()
{
  currentPos = 0;
}

//******************************************************************

bool List::HasNext() const
{
  return (currentPos != length);
}

//******************************************************************
ItemType List::GetNextItem()
{
  ItemType item;
  item = data[currentPos];
  currentPos++;
  return item;
}

//******************************************************************

void List::Sort()
// Post:  Straight selection sort has been used to sort the list items
{
  ItemType temp;
  int passCount;   // Outer loop control variable
  int searchIndex; // Inner loop control variable
  int minIndex;    // Index of minimum so far

  for (passCount = 0; passCount < length - 1; passCount++)
  {
    minIndex = passCount;
    // Find the index of the smallest component
    // in data[passCount..length–1]
    for (searchIndex = passCount + 1; searchIndex < length;
         searchIndex++)
      if (data[searchIndex] < data[minIndex])
        minIndex = searchIndex;
    // Swap data[minIndex] and data[passCount]

    temp = data[minIndex];
    data[minIndex] = data[passCount];
    data[passCount] = temp;
  }
}
