#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Declare and open files
    ifstream inData;
    ofstream outData;
    inData.open("name.in");
    outData.open("name.out");

    // Declare variables
    string socialNum, firstName, lastName, middleName;
    char initial; // Middle initial

    // Read in data from file inData
    inData >> socialNum >> firstName >> middleName >> lastName;

    // Access middle initial and append a period
    initial = middleName.at(0);

    // Output information in required formats
    outData << firstName << " " << middleName << " " << lastName
            << " " << socialNum << endl;
    outData << lastName << ", " << firstName << " " << middleName
            << " " << socialNum << endl;
    outData << lastName << ", " << firstName << " " << initial
            << ". " << socialNum << endl;
    outData << firstName << " " << initial << ". " << lastName;

    // Close files
    inData.close();
    outData.close();

    return 0;
}