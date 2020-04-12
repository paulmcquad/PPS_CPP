#include <iostream>
using namespace std;

int main()
{
    int temperature; // the outside temperature

    // Read and echo temperature
    cout << "Enter the outside temperature: " << endl;
    cin >> temperature;
    cout << "The current temperature is: " << temperature << endl;

    // Print activity
    cout << "The recommended activity is ";
    if (temperature > 85)
    {
        cout << "swimming." << endl;
    }
    else if (temperature > 70)
    {
        cout << "tennis." << endl;
    }
    else if (temperature > 32)
    {
        cout << "golf." << endl;
    }
    else if (temperature > 0)
    {
        cout << "skiing." << endl;
    }
    else
    {
        cout << "dancing." << endl;
    }

    return 0;
}
