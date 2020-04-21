//****************************************************
// SPECIFICATION FILE for class AppointmentCalendar
//****************************************************

#include "List.hxx"
#include <fstream>
using namespace std;

class AppointmentCalendar
{
public:
  // Constructor
  AppointmentCalendar(ifstream &inFile);
  // Knowledge responsibility
  bool IsThere(Name name, Date date);
  // Action responsibilities
  EntryWithDate GetEntry(Name name, Date date);
  // Returns entry with date and name fields equal to parameters
  // Pre:  entry with date and name fielsd equal to parameters exists
  void InsertEntry(EntryWithDate initEntry);
  // Inserts entry into list
  void WriteListToFile(ofstream &outFile);
  // Writes list to outFile

private:
  List list;
};