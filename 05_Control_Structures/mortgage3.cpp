//*****************************************************************
// Mortgage 3 Payment Calculator program
// This program determines the monthly payments on a mortgage given
// the loan amount, the yearly interest, and the number of years.
//*****************************************************************

#include <cmath>   // Access power function
#include <iomanip> // Access manipulators
#include <iostream>
using namespace std;

int main()
{

        // Input variables
        float loanAmount, yearlyInterest; // Amount of the loan + Yearly interest rate
        int numberOfYears;                // Number of years

        // local variables
        float monthlyInterest, payment; // Monthly interest rate + Monthly payment
        int numberOfPayments;           // Total number of payments

        // Prompts
        cout << "Input loan amount, interest rate, and number of years."
             << endl;
        cout << "An interest rate of less than 0.25 is assumed to be "
             << endl;
        cout << "a decimal rather than a percent. " << endl;

        // Read values
        cin >> loanAmount >> yearlyInterest >> numberOfYears;

        // Calculate values
        if (yearlyInterest >= 0.25) // Assume percent entered
                yearlyInterest = yearlyInterest / 100.0;
        monthlyInterest = yearlyInterest / 12;
        numberOfPayments = numberOfYears * 12;
        payment = (loanAmount *
                   pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest) /
                  (pow(monthlyInterest + 1,
                       numberOfPayments) -
                   1);

        // Output results
        cout << fixed << "Loan amount: " << setprecision(2)
             << loanAmount << endl
             << "Interest Rate: " << setprecision(4) << yearlyInterest * 100.0 << "%"
             << endl
             << "Number of Years " << numberOfYears << endl;
        cout << fixed
             << "Monthy payment: " << setprecision(2) << payment << endl;
        return 0;
}
