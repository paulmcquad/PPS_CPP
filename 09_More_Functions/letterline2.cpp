#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void LetterCount(string line);
void LineCount(istream &file, int &count);

int main()

{
    ifstream inFile;
    inFile.open("test.dat");
    int count = 0;
    LineCount(inFile, count);
    cout << "Number of lines: " << count << endl;
    return 0;
}

void LetterCount(string line)
{
    int count = line.length();
    cout << " has " << count << " characters: " << endl;
}

void LineCount(istream &file, int &count)
{
    string line;
    getline(file, line);

    while (file)
    {
        count++;
        cout << "Line " << count;
        LetterCount(line);
        getline(file, line);
    }
}