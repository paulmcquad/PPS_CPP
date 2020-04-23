//*****************************************************************
// IMPLEMENTATION FILE (Entry.cxx)
// This file contains the specification of the Entry ADT,
// which has two contained classes, Name and Time
//*****************************************************************

#include "Entry.hxx"
#include <string>
#include <iostream>

using namespace std;

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

Entry::Entry(Name initName, TimeOfDay initTime)
{
	name = initName;
	time = initTime;
}

//************************************************************

TimeOfDay Entry::GetTime() const
{
	return time;
}

//************************************************************

Name Entry::GetName() const
{
	return name;
}
