#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int height, width;
    ifstream inFile;

    inFile.open("measures.dat");
    if (!inFile)
    {
        cout << "Can't open the input file. ";
        return 1;
    }
    inFile >> height >> width;
    cout << "For a height of " << height << endl
         << "and a width of " << width << endl
         << "the area is " << height * width << endl;

    return 0;
}