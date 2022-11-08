#include <cctype>
#include <string>
#include <iostream>
using namespace std;

enum Animals
{
    RODENT,
    CAT,
    DOG,
    BIRD,
    REPTILE,
    HORSE,
    BOVINE,
    SHEEP
};

Animals StrToAnimal(string str);

int main()
{
    string animalName;
    Animals inPatient;
    cout << "Enter the name of the animal. " << endl;
    cout << "Enter Quit to stop. " << endl;

    cin >> animalName;
    while ((toupper(animalName.at(0))) != 'Q')
    {
        cout << "You entered ";

        switch (StrToAnimal(animalName))
        {
        case RODENT:
            cout << "Rodent";
            break;
        case CAT:
            cout << "Cat";
            break;
        case DOG:
            cout << "Dog";
            break;
        case BIRD:
            cout << "Bird";
            break;
        case REPTILE:
            cout << "Reptile";
            break;
        case HORSE:
            cout << "Horse";
            break;
        case BOVINE:
            cout << "Bovine";
            break;
        case SHEEP:
            cout << " Sheep";
            break;

        default:
            break;
        }
        cout << endl;
        cout << "Enter the name of an animal. " << endl;
        cout << "Enter Quit to stop" << endl;
        cin >> animalName;
    }

    return 0;
}

Animals StrToAnimal(string str)
{
    switch ((toupper(str.at(0))))
    {
    case 'R':
        if (toupper(str.at(1)) == 'O')
            return RODENT;
        else
            return REPTILE;
    case 'C':
        return CAT;
    case 'D':
        return DOG;
    case 'B':
        if (toupper(str.at(1)) == 'I')
            return BIRD;
        else
            return BOVINE;
    case 'H':
        return HORSE;

    default:
        return SHEEP;
    }
}