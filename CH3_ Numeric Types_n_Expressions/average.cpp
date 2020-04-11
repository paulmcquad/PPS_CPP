// Program Typos prints three integer numbers, sums the numbers, calculates
// the average, and prints the sum and the average of the three numbers.

#include <iostream>
#include <iomanip>
using namespace std;

const int ONE = 5;
const int TWO = 6;
const int THREE = 7;

int main()
{
    int sum;
    float average;

    cout << fixed << showpoint;

    cout << ONE << " " << TWO << " " << THREE << endl;
    sum = ONE + TWO + THREE;
    average = 3 % sum;
    cout << "The sum is " << sum << " and the average is " << average << endl;
    return 0;
}
