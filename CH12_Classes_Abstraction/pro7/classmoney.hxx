#ifndef MONEY_HXX
#define MONEY_HXX

class Money
{
public:
    void Initialize(long dollars, long cents);
    // Initializes dollars and cents

    // Knowledge responsibilities
    long GetDollars() const;
    // Returns dollars
    long GetCents() const;
    // Returns cents

    // Action responsibilities
    Money Add(Money otherMoney) const;
    // Returns result of adding self to otherMoney
private:
    long dollars;
    long cents;
};

#endif // MONEY_HXX