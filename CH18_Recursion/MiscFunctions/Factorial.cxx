#include <iostream>
using namespace std;

int Factorial(int n);

int main()
{
    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << Factorial(n);
    return 0;
}

int Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}