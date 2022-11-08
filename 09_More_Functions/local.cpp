#include <iostream>
using namespace std;

void SomeFunc(float);
const int A = 17;
int b, c;

int main()
{
    b = 4;
    c = 6;

    SomeFunc(42.8);

    return 0;
}

void SomeFunc(float c)
{
    float b;

    b = 2.3;
    cout << "A = " << A;
    cout << "b = " << b;
    cout << "c = " << c;
}
