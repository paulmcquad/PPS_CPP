//*************************************************
//  SPECIFICATION FILE (TimeOfDay.hxx)
//  This file gives the specification
//  of a TimeOfDay abstract data type.
//*************************************************

#ifndef TIMEOFDAY_HXX
#define TIMEOFDAY_HXX

#include "RelationType.hxx"

class TimeOfDay
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    TimeOfDay(); //Constructor
    // Post: hours, minutes and seconds have been set to 0
    ~TimeOfDay(); // Destructor

    TimeOfDay(int initHours, int initMinutes, int initSeconds);
    // Pre: 0 <= hours <= 23, 0 <= minutes <= 59, 0 <= seconds <= 59
    // Post: TimeOfDay is set according to the incoming parameters
    TimeOfDay Increment() const;
    // Post: Returns a TimeOfDay that's the instance plus one.
    //      23.59:59 wrapping around to 0:0:0

    int GetHours() const;
    // Returns hours
    int GetMinutes() const;
    // Returns minutes
    int GetSeconds() const;
    // Returns seconds
    RelationType ComparedTo(TimeOfDay otherDay);
    // Post: Returns BEFORE if instance comes before otherDay;
    // Post: Returns SAME if instance and otherDay are the same;
    // Post: Returns After if instance comes after otherDay;

    void Write() const;
    // Post: Instance has been output in the form HH::MM::SS
    bool Equal(TimeOfDay otherTimeOfDay) const;
    // Post: Returns true if this instance equals otherTime,
    //       false otherwise
    bool LessThan(TimeOfDay otherTimeOfDay) const;
    // Post: Returns true if this instance comes earlier than
    //       otherTime, false otherwise
};

#endif //TIMEOFDAY_HXX