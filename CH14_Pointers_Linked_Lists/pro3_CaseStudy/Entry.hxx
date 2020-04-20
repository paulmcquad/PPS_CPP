//*****************************************************************
// SPECIFICATION FILE (Entry.h)
// This file contains the specification of the Entry ADT, which has
// two contained classes, Name and Time.
// A ComparedTo function has been added to this class.
//*****************************************************************

#include "TimeOfDay.hxx"
#include "Name.hxx"
#include "RelationType.hxx"

class Entry
{
public:
  Entry();
  // Default constructor
  // Post: Entry object has been constructed
  //       Name and TimeOfDay objects have been constructed using
  //       their defualt constructors
  Entry(string firstName, string middleName, string lastName,
        int initHours, int initMinutes, int initSeconds);
  // Parameterized constructor
  // Post: Entry object has been constructed.
  //       Name and TimeOfDay objects have been constructed using
  //       their parameterized constructors
  Entry(Name newName, TimeOfDay newTime);
  // Parameterized constructor
  // Post:  Entry object has been constructed

  RelationType ComparedTo(Entry entry);
  // Returns result of comparing time with entry.time

  // Knowledge responsibilities
  TimeOfDay GetTime() const;
  // The function returns the time attribute
  Name GetName() const;
  // This function returns the name attribute
  string GetNameStr() const;
  // Post: Returns the first and last name of Name object
  //       with a blank in between
  string GetTimeStr() const;
  // Post: Returns the hours and minutes from TimeOfDay object
  //       with a colon in between

private:
  Name name;
  TimeOfDay time;
};
