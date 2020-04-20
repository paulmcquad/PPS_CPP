//*****************************************************************
// DRIVER for class sorted list of class Entry
// This program tests the constructors and return functions
//*****************************************************************

#include <iostream>

#include "SortedList.hxx"
#include <string>

using namespace std;

int main()
{
  SortedList list;
  Entry entry1("Sally", "Jane", "Smith", 12, 20, 0);
  if (!list.IsThere(entry1))
    list.Insert(entry1);
  Entry entry2("Mary", "Beth", "Jones", 10, 30, 0);
  if (!list.IsThere(entry2))
    list.Insert(entry2);
  if (!list.IsThere(entry2))
    list.Insert(entry2);
  Name name("Susy", "Nell", "Baxter");
  TimeOfDay time(8, 30, 0);
  Entry entry3(name, time);
  if (!list.IsThere(entry3))
    list.Insert(entry3);
  list.ResetList();
  while (list.HasNext())
  {
    entry1 = list.GetNextItem();
    cout << entry1.GetNameStr() << " " << entry1.GetTimeStr() << endl;
  };

  return 0;
}
