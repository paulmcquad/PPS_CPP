
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inData;
    inData.open("myData.dat");

    int intValue;

    cout << "Numbers on file myData.dat: " << endl;
    inData >> intValue;
    while (inData)
    {
        cout << intValue << " ";
        inData >> intValue;
    }

    cout << endl;
    inData.close();

    return 0;
}