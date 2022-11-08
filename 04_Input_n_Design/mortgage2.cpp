//*****************************************************************
// Mortgage 2 Payment Calculator program
// This program determines the monthly payments on a mortgage given
// the loan amount, the yearly interest, and the number of years.
//*****************************************************************

#include <fstream> // Access
#include <cmath>   // Access power function
#include <iomanip> // Access manipulators
using namespace std;

int main()
{

     // Input variables
     float loanAmount, yearlyInterest; // Amount of the loan + Yearly interest rate
     int numberOfYears;                // Number of years
     ofstream outData;
     ifstream inData;

     // local variables
     float monthlyInterest, payment; // Monthly interest rate + Monthly payment
     int numberOfPayments;           // Total number of payments

     // Open files
     inData.open("loan.in");
     outData.open("loan.out");

     // Read values
     inData >> loanAmount >> yearlyInterest >> numberOfYears;

     // Calculate values
     monthlyInterest = yearlyInterest / 12;
     numberOfPayments = numberOfYears * 12;
     payment = (loanAmount *
                pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest) /
               (pow(monthlyInterest + 1,
                    numberOfPayments) -
                1);

     // Output results
     outData << fixed << "Loan amount: " << setprecision(2)
             << loanAmount << endl
             << "Interest Rate: " << setprecision(4) << yearlyInterest
             << endl
             << "Number of Years " << numberOfYears << endl;
     outData << fixed
             << "Monthy payment: " << setprecision(2) << payment << endl;

     // Close files
     inData.close();
     outData.close();
     return 0;
}
