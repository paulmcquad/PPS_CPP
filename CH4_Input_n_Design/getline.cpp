#include <iostream>
#include <string>

using namespace std;

int main()
{
    int partnumber, quantity;
    float unitPrice, totalPrice;
    string title;

    getline(cin, title);
    cin >> partnumber >> quantity >> unitPrice;
    totalPrice = quantity * unitPrice;

    cout << title << endl;
    cout << partnumber << " " << quantity << " "
         << unitPrice << " ";
    cout << totalPrice << endl;

    return 0;
}
