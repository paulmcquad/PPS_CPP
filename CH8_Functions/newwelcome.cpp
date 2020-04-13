#include <iostream>
using namespace std;

void PrintLines(int numLines);

int main()
{
    PrintLines(2);
    cout << "Welcome Home!" << endl;
    PrintLines(4);

    return 0;
}

void PrintLines(int numLines)
{
    for (int count = 1; count <= numLines; count++)
    {
        cout << "**************" << endl;
    }
}