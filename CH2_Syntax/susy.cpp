#include <iostream>
#include <string>
using namespace std;

int main()
{

    const string BORDER = "******************************************";
    const string NAME = "Susy Sunshine";
    const string MESSAGE = "Good Morning";
    string outMessge;
    cout << BORDER << endl;
    outMessge = MESSAGE + " to " + " Miss " + NAME;
    cout << outMessge << '!' << endl;
    cout << BORDER << endl;

    return 0;
}