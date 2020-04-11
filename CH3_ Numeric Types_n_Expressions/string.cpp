#include <iostream>
#include <string>

using namespace std;

int main()
{
    string theString;

    theString = "Abracadabra";
    cout << "Position: " << theString.find('a') << "\n";
    return 0;
}