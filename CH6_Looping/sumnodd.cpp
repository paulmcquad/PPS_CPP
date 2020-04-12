
#include <iostream>

using namespace std;

int main()
{
    int count = 0, sum = 0, number;
    bool lessThanTen = true;

    cout << "Enter a data set that contains at least 10 odd numbers: "
         << endl;

    while (lessThanTen)
    {
        cin >> number;
        if (number % 2 == 1)
        {
            count++;
            sum = sum + number;
            lessThanTen = (count < 10);
        }
    }
    cout << "The sum of the first 10 odd numbers is: " << sum
         << "." << endl;

    return 0;
}