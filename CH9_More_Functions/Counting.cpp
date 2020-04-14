#include <iostream>
using namespace std;

void counting();

int main()

{
    for (int count = 1; count <= 10; count++)
        counting();
    return 0;
}

void counting()
{
    static int counter = 0;

    counter++;
    cout << "Count: " << counter << endl;
}