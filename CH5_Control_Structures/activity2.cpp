#include <iostream>
using namespace std;

int main()
{
    int temperature; // the outside temperature
    bool raining, walk, movie, book;

    // Read and echo temperature
    cout << "Enter the outside temperature: " << endl;
    cin >> temperature;
    cout << "Enter 1 if it is raining and 0 if it is not." << endl;
    cin >> raining;
    cout << "The current temperature is: " << temperature;
    if (raining)
        cout << " and it is raining. " << endl;
    else
        cout << " and it is not raining. " << endl;

    // Print activity
    walk = temperature > 60 && !raining;
    movie = temperature > 60 && raining;
    book = temperature < 60;
    if (walk)
        cout << "Go for a walk. " << endl;
    else if (movie)
        cout << "Go to a movie." << endl;
    else
        cout << "Read a good book" << endl;

    return 0;
}
