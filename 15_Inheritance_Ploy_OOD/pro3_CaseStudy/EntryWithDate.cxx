//******************************************************
// IMPLEMENTATION FILE for class EntryWithDate
//******************************************************

#include "EntryWithDate.hxx"

EntryWithDate::EntryWithDate()
{
}

//******************************************************

EntryWithDate::EntryWithDate(Date initDate,
                             TimeOfDay initTime, Name initName) : Entry(initName.GetFirstName(), initName.GetMiddleName(),
                                                                        initName.GetLastName(), initTime.GetHours(),
                                                                        initTime.GetMinutes(), initTime.GetSeconds())
{
  date = initDate;
}

//******************************************************

Date EntryWithDate::GetDate() const
{
  return date;
}

//******************************************************

RelationType EntryWithDate::ComparedTo(EntryWithDate otherEntry) const
{
  if (date.ComparedTo(otherEntry.date) == SAME && GetName().ComparedTo(otherEntry.GetName()) == SAME)
    return SAME;
  else if (date.ComparedTo(otherEntry.date) == BEFORE)
    return BEFORE;
  return AFTER;
}
