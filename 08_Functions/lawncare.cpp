#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Functions prototypes
void OpenFiles(ifstream &inFile, ofstream &outFile);
void ProcessClients(ifstream &inFile, ofstream &outFile,
                    float hourlyRate);

void ProcessAClient(ifstream &inFile, ofstream &outFile,
                    int totalTime, float hourlyRate);

void GetAndPrintAddress(ifstream &inFile, ofstream &outFile);

void PrintResults(int numberOfBills, int totalMinutes,
                  float hourlyRate);

int main()
{
    float hourlyRate;
    ifstream inFile;
    ofstream outFile;
    OpenFiles(inFile, outFile);

    if (!inFile || !outFile)
    {
        cout << "Error opening files " << endl;
        return 1;
    }
    cout << "Enter hourly rate" << endl;
    cin >> hourlyRate;
    ProcessClients(inFile, outFile, hourlyRate);
    inFile.close();
    outFile.close();

    return 0;
}
//***************************************************************************
void OpenFiles(ifstream &inFile, ofstream &outFile)
{
    string inFileName, outFileName; // input/ ouput Files
    cout << "Enter the name of the input file." << endl;
    cin >> inFileName;
    inFile.open(inFileName.c_str());

    cout << "Enter the name of the output file." << endl;
    cin >> outFileName;
    outFile.open(outFileName.c_str());
    outFile << "Billing for clients on file " << inFileName << endl;
    outFile << fixed;
}

//***************************************************************************
void ProcessClients(ifstream &inFile, ofstream &outFile,
                    float hourlyRate)
{
    int totalTime = 0, numberOfBills = 0;
    string name;
    getline(inFile, name);
    while (inFile)
    {
        outFile << name << endl;
        ProcessAClient(inFile, outFile, totalTime, hourlyRate);
        numberOfBills++;
        getline(inFile, name);
    }
    // Print summary information
    PrintResults(numberOfBills, totalTime, hourlyRate);
}

//***************************************************************************

void PrintResults(int numberOfBills, int totalMinutes,
                  float hourlyRate)
{
    float minutes = (float)totalMinutes;
    cout << "Total amount billed this month is "
         << minutes / 60.0 * hourlyRate << endl;
    cout << "Average time worked per job is "
         << minutes / float(numberOfBills) / 60.0 << endl;
    cout << "Average customer bill is "
         << minutes / 60.0 * hourlyRate / float(numberOfBills) << endl;
}

//***************************************************************************

void GetAndPrintAddress(ifstream &inFile, ofstream &outFile)
{
    string line;
    getline(inFile, line); // Process street line
    outFile << line << endl;
    getline(inFile, line); // Process city line
    outFile << line << endl
            << endl;
}

//***************************************************************************

void ProcessAClient(ifstream &inFile, ofstream &outFile,
                    int totalTime, float hourlyRate)
{
    int time = 0, hours, minutes, numberOfJobs;
    float cost;

    // Process
    GetAndPrintAddress(inFile, outFile);
    inFile >> numberOfJobs;
    outFile << "Number of jobs: " << numberOfJobs << endl;

    for (int count = 1; count <= numberOfJobs; count++)
    {
        inFile >> hours >> minutes;
        time = hours * 60 + minutes + time;
        outFile << "Job " << count << ": " << hours
                << " hours and " << minutes << " minutes " << endl;
    }
    cost = (float)time / 60.0 * hourlyRate;
    totalTime = totalTime + time;

    outFile << "Amount of bill: € " << setprecision(2)
            << cost << endl
            << endl;

    string skip;
    getline(inFile, skip);
}

//***************************************************************************