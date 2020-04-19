// Program Money manipulates instances of class Money.
#include <iostream>
#include "classmoney.hxx"
using namespace std;

int main()
{
  Money money1;
  Money money2;
  Money money3;
  money1.Initialize(10, 59);
  money2.Initialize(20, 70);
  money3 = money1.Add(money2);
  cout << "$" << money3.GetDollars() << "."
       << money3.GetCents() << endl;
  return 0;
}

