//*****************************************************************
// LoanPayment Calculator program
// This program determines the monthly payments on a mortgage given
// the loan amount, the yearly interest, and the number of years.
//*****************************************************************

#include <cmath>   // Access power function
#include <iomanip> // Access manipulators
#include <iostream>
using namespace std;

// Function prototypes
void GetLoanAmt(float &loanAmount);
void GetRest(float &monthlyInterest, int &numberOfYears);
void GetInterest(float monthlyInterest);
void DeterminePayment(float loanAmount, float monthlyInterest,
                      int numberOfPayments, float &payment);

void PrintResults(float loanAmount, float yearlyInterest,
                  int numberOfPayments, float payment,
                  float totalInterest);

int main()
{

    // Input variables
    float loanAmount;  // Amount of the loan + Yearly interest rate
    int numberOfYears; // Number of years

    // local variables
    float monthlyInterest, payment, totalInterest; // Monthly interest rate + Monthly payment
    int numberOfPayments;                          // Total number of payments

    // Calculate payments
    GetLoanAmt(loanAmount);
    while (loanAmount > 0)
    {
        GetRest(monthlyInterest, numberOfYears);
        numberOfPayments = numberOfYears * 12;
        DeterminePayment(loanAmount, monthlyInterest,
                         numberOfPayments, payment);
        totalInterest = payment * numberOfPayments - loanAmount;
        PrintResults(loanAmount, monthlyInterest, numberOfPayments,
                     payment, totalInterest);
        GetLoanAmt(loanAmount);
    }

    return 0;
}

//***************************************************************************

void GetLoanAmt(float &loanAmount)
{
    cout << "Input loan amount.   "
         << "A negative loan amount ends the processing. "
         << endl;
    cin >> loanAmount;
}

//***************************************************************************

void GetRest(float &monthlyInterest, int &numberOfYears)
{
    GetInterest(monthlyInterest);
    cout << "Enter the number of years of the loan. " << endl;
    cin >> numberOfYears;
}

//***************************************************************************

void GetInterest(float monthlyInterest)
{
    float yearlyInterest; // Local variable
    cout << "Input interest rate. "
         << "An interest rate of less than 0.25 is assumed "
         << " to be a decimal rather than a percent. " << endl;
    cin >> yearlyInterest;
    if (yearlyInterest >= 0.25) // Assume percent entered
        yearlyInterest = yearlyInterest / 100.0;
    monthlyInterest = yearlyInterest / 12;
}

//***************************************************************************
void DeterminePayment(float loanAmount, float monthlyInterest,
                      int numberOfPayments, float &payment)
{
    payment = (loanAmount * pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest) /
              (pow(1 + monthlyInterest, numberOfPayments) - 1);
}

//***************************************************************************

void PrintResults(float loanAmount, float yearlyInterest,
                  int numberOfPayments, float payment,
                  float totalInterest)
{
    // Output results
    cout << fixed << "Loan amount: " << setprecision(2)
         << loanAmount << endl
         << "Interest Rate: " << setprecision(4) << yearlyInterest * 100.0 << "%"
         << endl
         << "Number of payments: " << numberOfPayments << endl;
    cout << fixed
         << "Monthy payments: " << setprecision(2) << payment << endl;

    cout << fixed << "Total Interest:       " << setprecision(2)
         << (payment * numberOfPayments - loanAmount) << endl;
}
//***************************************************************************
