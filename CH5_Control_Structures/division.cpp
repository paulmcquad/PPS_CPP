#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, result;
    cout << "Enter dividend and divisor: " << endl;
    cin >> dividend >> divisor;

    if (divisor != 0)
    {
        result = dividend / divisor;
        cout << "Result is: " << result << endl;
    }
    else
    {
        cout << "Division by zero is not allowed. " << endl;
        result = 9999;
    }

    return 0;
}
