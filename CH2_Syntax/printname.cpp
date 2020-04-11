#include <iostream>
#include <string>
using namespace std;

const string FIRST = "Herman";
const string LAST = "Smith";
const char MIDDLE = 'G';
const string TITLE = "Mr.";

int main()
{
    string firstLast;
    string lastFirst;

    firstLast = TITLE + " " + FIRST + " " + LAST;
    cout << "Name in first-last format is " << firstLast << endl;

    lastFirst = LAST + ", " + TITLE + " " + FIRST + ", ";
    cout << "Name in last-first-initial format is ";
    cout << lastFirst << MIDDLE << '.' << endl;

    return 0;
}