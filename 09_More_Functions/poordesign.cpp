// Runs but incorrect results due to global / local variables and side effects

#include <iostream>
using namespace std;

void CountInts();

int counter;
int intVal;

int main()
{
    counter = 0;
    cin >> intVal;
    while (cin)
    {
        counter++;
        CountInts();
        cin >> intVal;
    }
    cout << counter << " lines of input processed." << endl;

    return 0;
}

void CountInts()
{
    counter = 0;
    while (intVal != 99999)
    {
        counter++;
        cin >> intVal;
    }
    cout << counter << " integers on this line. " << endl;
}
