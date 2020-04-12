#include <iostream>
using namespace std;

int main()
{
    int starCount, loopCount;
    cout << "Enter the number of stars: "
         << "'Q' ends the program." << endl;
    cin >> starCount;

    while (cin)
    {
        loopCount = 1;
        while (loopCount <= starCount)
        {
            cout << '*';
            loopCount++;
        }
        cout << endl;
        cout << "Enter the number of stars: "
             << "'Q' ends the program." << endl;
        cin >> starCount;
    }
    cout << "Goodbye" << endl;

    return 0;
}