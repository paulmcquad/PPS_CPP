//*************************************************
//  (client.cxx)
//  A Program to create two time objects
//  and manipulate them.
//*************************************************
#include <iostream>
#include "TimeOfDay2.hxx"
#include "RelationType.hxx"
using namespace std;

int main()
{
    TimeOfDay time1(5, 30, 0); // Instantiate two TimeOfDay objects
    TimeOfDay time2;

    cout << "time1: " << time1.GetHours() << ':' // Print them and compare them
         << time1.GetMinutes() << ':'
         << time1.GetSeconds() << endl;

    cout << "time2: " << time2.GetHours() << ':'
         << time2.GetMinutes() << ':'
         << time2.GetSeconds() << endl;

    switch (time1.ComparedTo(time2))
    {
    case BEFORE:
        cout << "first time comes before second time"
             << endl;
        break;

    case SAME:
        cout << "times are the same"
             << endl;
        break;

    case AFTER:
        cout << "second time comes before first time"
             << endl;
        break;

    default:
        break;
    }

    switch (time2.ComparedTo(time1))
    {
    case BEFORE:
        cout << "first time comes before second time"
             << endl;
        break;

    case SAME:
        cout << "times are the same"
             << endl;
        break;

    case AFTER:
        cout << "second time comes before first time"
             << endl;
        break;

    default:
        break;
    }

    switch (time1.ComparedTo(time1))
    {
    case BEFORE:
        cout << "first time comes before second time"
             << endl;
        break;

    case SAME:
        cout << "times are the same"
             << endl;
        break;

    case AFTER:
        cout << "second time comes before first time"
             << endl;
        break;

    default:
        break;
    }

    return 0;
}