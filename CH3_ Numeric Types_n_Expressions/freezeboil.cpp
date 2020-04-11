#include <iostream>
using namespace std;

const float FREEZE_PT = 32.0;
const float BOIL_PT = 212.0;

int main()
{
    float avgTemp;

    cout << "Water freezes at " << FREEZE_PT << endl;
    cout << " and boils at " << BOIL_PT << " degrees." << endl;

    avgTemp = FREEZE_PT + BOIL_PT;
    avgTemp = avgTemp / 2.0;

    cout << "Halfway between is ";
    cout << avgTemp << " degrees. " << endl;

    return 0;
}
