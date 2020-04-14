#include <iostream>
#include <iomanip>

using namespace std;

const float TUITION = 35000.0f;

bool IsLeapYear(int year);
int Day(int month, int dayOfMonth, int year);

int main()
{
    int month, day, year;
    int start, last, withdraw;
    float fraction, refund;

    cout << "Enter the month, day and year of beginning of semester."
         << endl;
    cin >> month >> day >> year;
    start = Day(month, day, year);

    cout << "Enter the month, day and year of end of semester."
         << endl;
    cin >> month >> day >> year;
    last = Day(month, day, year);

    cout << "Enter the month, day and year of withdrawal."
         << endl;
    cin >> month >> day >> year;
    withdraw = Day(month, day, year);

    fraction = float(last - withdraw + 1) / float(last - start + 1);
    refund = TUITION * fraction;
    cout << "The student gets a refund of € " << fixed
         << setprecision(2) << refund << endl;

    return 0;
}

int Day(int month, int dayOfMonth, int year)
{
    int correction = 0;

    if (IsLeapYear(year))
        correction = 1;

    // Correct for different-length months
    switch (month)
    {
    case 3:
        correction = correction - 1;
        break;

    case 8:
        correction = correction + 2;
        break;

    case 2:
    case 6:
    case 7:
        correction = correction + 1;
        break;

    case 9:
    case 10:
        correction = correction + 3;
        break;
    case 11:
    case 12:
        correction = correction + 4;
        break;

    default:
        break;
    }
    return (month - 1) * 30 + correction + dayOfMonth;
}

bool IsLeapYear(int year)
{
    if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}