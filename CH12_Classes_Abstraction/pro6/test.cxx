//**************************************************************
// This program is a test driver for the Increment function
// in the TimeOfDay class.
//**************************************************************
#include <iostream>
#include "TimeOfDay.hxx"
using namespace std;

int main()
{
    int hours, minutes, seconds;
    cout << "Enter a TimeOfDay (use hours < 0 to quit): " << endl;
    cin >> hours >> minutes >> seconds;

    while (hours >= 0)
    {
        TimeOfDay time(hours, minutes, seconds);
        TimeOfDay timeInc = time.Increment();
        cout << "Incremented TimeOfDay is ";
        cout << timeInc.GetHours() << ':' << timeInc.GetMinutes() << ':'
             << timeInc.GetSeconds() << endl;
        cout << endl;

        cout << "Enter a TimeOfDay (use hours < 0 to quit): " << endl;
        cin >> hours >> minutes >> seconds;

    }

    return 0;
}