//**********************************************
// SPECIFICATION FILE for class EntryWithDate
// This class inherits from Entry
//**********************************************

#include "Entry.hxx"
#include "Date.hxx"

class EntryWithDate : public Entry
{
public:
  // Constructors
  EntryWithDate();
  EntryWithDate(Date initDate, TimeOfDay initTime, Name initName);
  // Knowledge responsibility
  Date GetDate() const;
  RelationType ComparedTo(EntryWithDate otherEntry) const;
  // Post: Returns BEFORE if instance comes before otherEntry;
  //       Returns SAME if instance and otherEntry are the same;
  //       Returns AFTER if instance comes after otherEntry;

private:
  Date date;
};
