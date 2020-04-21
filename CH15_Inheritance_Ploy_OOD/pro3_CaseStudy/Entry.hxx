//*****************************************************************
// SPECIFICATION FILE (Entry.hxx)
// This file contains the specification of the Entry ADT, which has
// two contained classes, Name and Time.
// Gettters for Name and Time have been added.
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
  //       their default constructors
  Entry(string firstName, string middleName, string lastName,
        int initHours, int initMinutes, int initSeconds);
  // Parameterized constructor
  // Post: Entry object has been constructed.
  //       Name and TimeOfDay objects have been constructed using
  //       their parameterized constructors
  Entry(Name initName, TimeOfDay initTime);
  // Parameterized constructor
  // Post:  Entry object has been constructed

  // Knowledge responsibilities
  TimeOfDay GetTime() const;
  // The function returns the time attribute
  Name GetName() const;
  // This function returns the name attribute
private:
  Name name;
  TimeOfDay time;
};
