#include <iostream>
#include <fstream>
using namespace std;

const int BUILDING_SIZE = 10; //No. of apartments

int main()
{
    int occupants[BUILDING_SIZE];
    int totalOccupants, counter, apt;
    ifstream inFile;

    inFile.open("apt.dat");
    totalOccupants = 0;
    for (counter = 0; counter < BUILDING_SIZE; counter++)
    {
        inFile >> occupants[counter];
        totalOccupants = totalOccupants + occupants[counter];
    }
    cout << "No. of apts. is " << BUILDING_SIZE << endl
         << "Total no. of occupants is " << totalOccupants << endl;

    cout << "Begin apt. lookup..." << endl;
    do
    {
        cout << "Apt number (1 through " << BUILDING_SIZE
             << ", or 0 to quit): ";
        cin >> apt;
        if (apt > 0)
            cout << "Apt. " << apt << " has " << occupants[apt - 1]
                 << " occupants" << endl;

    } while (apt > 0);

    return 0;
}