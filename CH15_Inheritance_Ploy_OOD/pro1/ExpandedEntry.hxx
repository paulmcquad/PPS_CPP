//******************************************************************
// SPECIFICATION FILE (ExpandedEntry.h)
// This file gives the specification of an ExpandedEntry abstract
// data type.  The Entry class is a public base class of
// ExpandedEntry, so public operations of Entry are also public
// operations of ExpandedEntry.
//******************************************************************
#include "Entry.hxx"

class ExpandedEntry : public Entry
{
public:
  // Constructors
  ExpandedEntry();
  // Default constructor
  ExpandedEntry(Name newName, TimeOfDay newTime);
  // Creates an entry object with newName as the name attribute and
  // newTime as the TimeOfDay attribute
  RelationType ComparedTo(ExpandedEntry otherEntry);
  // Compares Entry with otherEnry
  // Post: Return value is
  //       BEFORE if Entry comes before otherEntry;
  //       SAME if Entry is the same as otherEntry;
  //       AFTER if Entry comes after otherEntry
};
