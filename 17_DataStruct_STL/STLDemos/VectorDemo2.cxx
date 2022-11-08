//******************************************************************
// This program allows a building owner to look up how many
// occupants are in a given apartment
//******************************************************************
#include <iostream>
#include <fstream>               // For file I/O
#include <vector>                // For vectro template
#include <stdexcept>             // For out_of_range exception
using namespace std;

int main()
{
	vector<int> occupants;         // occupants vector with 0 elements
	int totalOccupants;            // Total number of occupants
	int apt;                       // An apartment number
	int aptOccupants;              // Occupants in one apartment
	ifstream inFile;               // File of occupant data (one
	                               //   integer per apartment)
	inFile.open("apt.dat");
	totalOccupants = 0;
	inFile >> aptOccupants;
	while (inFile)
	{
		occupants.push_back(aptOccupants);
		totalOccupants = totalOccupants + aptOccupants;
		inFile >> aptOccupants;
	}
	cout << "No. of apts. is " << occupants.size() << endl
	     << "Total no. of occupants is " << totalOccupants << endl;
	
	cout << "Begin apt. lookup..." << endl;
	do
	{
		cout << "Apt. number (1 through " << occupants.size()
		     << ", or 0 to quit): ";
		cin >> apt;
		if (apt > 0)
			try
		    {
			   cout << "Apt. " << apt << " has " << occupants.at(apt-1)
			        << " occupants" << endl;
			}
		    catch(out_of_range)
			{
				cout << "Invalid apartment number. Enter ";
			}
				
	} while (apt > 0);
	return 0;
}
