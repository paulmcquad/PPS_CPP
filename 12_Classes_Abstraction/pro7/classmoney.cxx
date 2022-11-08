//*****************************************************************
// IMPLEMENTATION FILE (classmoney.cxx)
// The file implements the Money member functions
//*****************************************************************
#include "classmoney.hxx"
#include <iostream>

void Money::Initialize(long newDollars, long newCents)
{
    dollars = newDollars;
    cents = newCents;
}

//********************************************************
long Money::GetDollars() const
{
    return dollars;
}

//********************************************************

long Money::GetCents() const
{
    return cents;
}

//********************************************************

Money Money::Add(Money otherMoney) const
{
    Money result;
    result.cents = cents + otherMoney.cents;
    result.dollars = dollars + otherMoney.dollars;
    return result;
}
