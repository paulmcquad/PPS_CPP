//*****************************************************************
// IMPLEMENTATION FILE (ExpandedEntry.cxx)
// This file gives the implementation for the ExpandedEntry ADT.
//****************************************************************
#include "ExpandedEntry.hxx"
#include <string>
#include <iostream>
using namespace std;

//**************************************************************

ExpandedEntry::ExpandedEntry()
{
}

//*************************************************************

ExpandedEntry::ExpandedEntry(Name newName, TimeOfDay newTime) : Entry(newName.GetFirstName(), newName.GetMiddleName(),
                                                                      newName.GetLastName(), newTime.GetHours(),
                                                                      newTime.GetMinutes(), newTime.GetSeconds())
{
}

//************************************************************

RelationType ExpandedEntry::ComparedTo(ExpandedEntry otherEntry)
{
  return (GetTime().ComparedTo(otherEntry.GetTime()));
}
