#ifndef APPOINTMENTCALENDAR_HXX
#define APPOINTMENTCALENDAR_HXX

#include <list>
#include <fstream>
#include "EntryWithDate.hxx"
using namespace std;

class AppointmentCalendar
{
private:
    list<EntryWithDate> entryList;

public:
    // Constructor
    AppointmentCalendar(ifstream &inFile);
    bool IsThere(Name name, Date date);

    //Actions
    EntryWithDate GetEntry(Name name, Date date);
    void InsertEntry(EntryWithDate initEntry);
    void WriteListToFile(ofstream &outFile);
};

#endif