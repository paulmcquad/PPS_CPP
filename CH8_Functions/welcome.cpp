#include <iostream>
using namespace std;

void Print2Lines();
void Print4Lines();

int main()
{
    Print2Lines();
    cout << "Welcome Home!" << endl;
    Print4Lines();

    return 0;
}

void Print2Lines()
{
    cout << "**************" << endl;
    cout << "**************" << endl;
}

void Print4Lines()
{
    Print2Lines();
    Print2Lines();
}
