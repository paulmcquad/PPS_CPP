//******************************************************************
// IMPLEMENTATION FILE (List.cxx)
// This file implements the List class member functions
// List representation: a one-dimensional array and a length
//                      variable
//******************************************************************
#include "List.hxx"
#include <iostream>

using namespace std;

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
  while (index < length && (item.ComparedTo(data[index]) != SAME))
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
  while (index < length && (item.ComparedTo(data[index]) != SAME))
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
