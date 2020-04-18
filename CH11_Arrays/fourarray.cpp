#include <iostream>

using namespace std;

int main()
{
    int data[4];

    for (int i = 1; i <= 4; i++)
        data[i] = i;
    for (int i = 1; i <= 6; i++)
        cout << data[i] << endl;

    return 0;
}