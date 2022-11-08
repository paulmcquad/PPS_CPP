
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    char prevChar, currChar;
    ifstream inFile;

    inFile.open("myfile.dat");
    if (!inFile)
    {
        cout << "Can't open input file" << endl;
        return 1;
    }
    inFile.get(prevChar);
    inFile.get(currChar);

    while (inFile)
    {
        if (currChar == '=' &&
            prevChar == '!') // Test for !=
            count++;

        prevChar = currChar;  // Update previous value to current
        inFile.get(currChar); // Get next value
    }
    cout << count << " != operators were found. " << endl;

    return 0;
}