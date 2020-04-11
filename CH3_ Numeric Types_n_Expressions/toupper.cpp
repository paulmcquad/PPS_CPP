#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string firstName = "mary";
    string lastName = "melrose";
    char ch;

    ch = toupper(firstName.at(0));
    firstName = ch + firstName.substr(1, firstName.length());

    ch = toupper(lastName.at(0));
    lastName = ch + lastName.substr(1, lastName.length());

    cout << firstName << " " << lastName << endl;

    return 0;
}
