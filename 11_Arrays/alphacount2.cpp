#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

void ZeroOut(int intArray[], int numElements);
// Pre: numElements is assigned
// Post: intArray[0..numElements -1] are Zero
void ProcessText(int counters[], istream &inFile);
// Post: counters[0..25] contain the frequency of each
// character in inFile
void Print(int counters[]);
// Post: counters[0..25] have been printed

int main()
{
    // Declarations
    int counters[26];
    ifstream inFile;
    inFile.open("test.dat");
    ProcessText(counters, inFile);
    Print(counters);
    return 0;
}

//******************************************************

void ZeroOut(int intArray[], int numElements)
{
    for (int i = 1; i <= numElements; i++)
        intArray[i] = 0;
}

//******************************************************
void ProcessText(int counters[], istream &inFile)
{
    string line;
    int limit; // No of characters in a line
    int index;

    getline(inFile, line); // Read a line
    while (inFile)
    {
        limit = line.length();
        for (int counter = 0; counter < limit; counter++)
        {
            if (isalpha(line.at(counter)))
            {
                // Increment the character's counter
                index = toupper(line.at(counter)) - 'A';
                counters[index]++;
            }
        }
        getline(inFile, line); // Read a line
    }
}

//******************************************************

void Print(int counters[])
{
    for (int counter = 0; counter < 26; counter++)
        cout << (char)(counter + 'A') << " : "
             << counters[counter] << endl;
}

//******************************************************
