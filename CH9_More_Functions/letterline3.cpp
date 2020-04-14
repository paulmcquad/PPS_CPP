#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void LetterCount(string line);
int LineCount(istream &file);

int main()

{
    ifstream inFile;
    inFile.open("test.dat");
    cout << "Number of lines: "
         << "\n"
         << LineCount(inFile) << endl;
    return 0;
}

void LetterCount(string line)
{
    int count = line.length();
    cout << " has " << count << " characters: " << endl;
}

int LineCount(istream &file)
{
    int count = 0;
    string line;
    getline(file, line);

    while (file)
    {
        count++;
        cout << "Line " << count;
        LetterCount(line);
        getline(file, line);
    }
    return count;
}