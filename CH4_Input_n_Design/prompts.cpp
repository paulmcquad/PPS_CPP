#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int partnumber, quantity;
    float unitPrice, totalPrice;
    string title;

    cout << fixed << showpoint // Set up floating-point
         << setprecision(2);   // output format

    cout << "Enter the title for this execution: " << endl; // Prompt
    getline(cin, title);

    cout << "Enter the part number: " << endl; // Prompt
    cin >> partnumber;

    cout << "Enter the quantity of this part ordered: " << endl; // Prompt
    cin >> quantity;

    cout << "Enter the unit price for this part: " << endl; // Prompt
    cin >> unitPrice;

    totalPrice = quantity * unitPrice;

    cout << title << endl;
    cout << "Part" << partnumber
         << ", quantity " << quantity
         << ", at € " << unitPrice << " each " << endl;
    cout << "totals € " << totalPrice << endl;

    return 0;
}
