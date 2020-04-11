#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float alpha;
    float beta;
    alpha = sqrt(7.3 + fabs(100));
    cout << "alpha " << alpha << endl;
    beta = pow(alpha, 2);
    cout << "alpha squared " << beta << endl;

    return 0;
}