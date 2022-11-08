//*****************************************************************
// IMPLEMENTATION FILE (Entry.cxx)
// This file contains the specification of the Entry ADT,
// which has two contained classes, Name and Time
//*****************************************************************

#include "Entry.hxx"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

string Entry::GetNameStr() const
{
  return (name.GetFirstName() + ' ' + name.GetLastName());
}

//**************************************************************

string Entry::GetTimeStr() const
{
  string outStr;
  ostringstream tempOut; // Access ostringstream

  if (time.GetHours() < 10)
    tempOut << '0';
  tempOut << time.GetHours() << ":";
  if (time.GetMinutes() < 10)
    tempOut << '0';
  tempOut << time.GetMinutes() << ":";
  if (time.GetSeconds() < 10)
    tempOut << '0';
  tempOut << time.GetSeconds();
  outStr = tempOut.str();
  return outStr;
}

//**************************************************************

Entry::Entry()
{
}

//*************************************************************

Entry::Entry(string firstName, string middleName, string lastName,
             int initHours, int initMinutes, int initSeconds)

    : name(firstName, middleName, lastName),
      time(initHours, initMinutes, initSeconds)
{
}

//*************************************************************

Entry::Entry(Name newName, TimeOfDay newTime)
// Creates an entry object with newName as the name attribute and
// newTime as the time attribute
{
  name = newName;
  time = newTime;
}

//*************************************************************

RelationType Entry::ComparedTo(Entry entry)
// Compares time with entry.time
// Post: Return value is
//       BEFORE if time comes before entry.time;
//       SAME if time is the same as entry.time;
//       AFTER if time comes after entry.time
{
  return (time.ComparedTo(entry.time));
}
