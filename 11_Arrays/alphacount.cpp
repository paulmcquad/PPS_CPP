#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
    // Declarations
    int counters[26];
    ifstream inFile;
    inFile.open("test.dat");
    string line;
    int limit; // No of characters in a line
    int index;

    // Zero out the array of counters
    for (int counter = 0; counter < 26; counter++)
        counters[counter] = 0;
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
    for (int counter = 0; counter < 26; counter++)
        cout << (char)(counter + 'A') << " : "
             << counters[counter] << endl;

    return 0;
}