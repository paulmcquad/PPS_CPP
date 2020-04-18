#include <iostream>

using namespace std;

int main()
{
    int number, value[10];
    for (number = 0; number < 10; number++)
        cin >> value[number];

    for (number = 10; number >= 0; number--)
        cout << value[number] << endl;

    return 0;
}