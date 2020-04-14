//******************************************************************
// Profile 2 Program - EvaluateCholesterol
// This program inputs a name, weight, height, blood pressure
// readings, and cholesterol values.  Appropriate health messages
// are written for each of the input values on file healthProfile.
//******************************************************************

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void EvaluateCholesterol(ofstream &, string);
// This function inputs HDL (good cholesterol) and LDL (bad
// cholesterol) and prints out a  health message based on their
// values on file healthProfile.
// Pre: Input file has been successfully opened

int main()
{
    // Declare and open the output file
    ofstream healthProfile;
    healthProfile.open("Profile2.out");
    string name = "John J. Smith";
    for (int test = 1; test <= 8; test++)
        EvaluateCholesterol(healthProfile, name);

    healthProfile.close();
    return 0;
}

//******************************************************************

void EvaluateCholesterol(ofstream &healthProfile, string name)
// This function inputs HDL (good cholesterol) and LDL (bad
// cholesterol) and prints out a  health message based on their
// values on file healthProfile.
{
    int HDL;
    int LDL;

    // Prompt for and enter HDL and LDL
    cout << "Enter HDL for " << name << ": ";
    cin >> HDL;
    cout << "Enter LDL for " << name << ": ";
    cin >> LDL;
    float ratio = (float)HDL / (float)LDL; // Calculate ratio of HDL to LDL

    healthProfile << "Cholesterol Profile " << endl
                  << "   HDL: " << HDL << "  LDL: " << LDL << endl
                  << "   Ratio: " << fixed << setprecision(4)
                  << ratio << endl;

    // Print message based on HDL value
    if (HDL < 40)
        healthProfile << "   HDL is too low" << endl;
    else if (HDL < 60)
        healthProfile << "   HDL is okay" << endl;
    else
        healthProfile << "   HDL is excellent" << endl;
    // Print message based on LDL value
    if (LDL < 100)
        healthProfile << "   LDL is optimal" << endl;
    else if (LDL < 130)
        healthProfile << "   LDL is near optimal" << endl;
    else if (LDL < 160)
        healthProfile << "   LDL is borderline high" << endl;
    else if (LDL < 190)
        healthProfile << "   LDL is high" << endl;
    else
        healthProfile << "   LDL is very high" << endl;

    if (ratio > 0.3)
        healthProfile << "   Ratio of HDL to LDL is good"
                      << endl;
    else
        healthProfile << "   Ratio of HDL to LDL is not good"
                      << endl;
}

//******************************************************************
