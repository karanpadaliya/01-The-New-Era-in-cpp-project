// 4. WAP to create a class which Read and Print House details along with Room details.

#include <iostream>
using namespace std;

class House
{
public:
    int People, Room_No, Bed, Tv, fridge, Washing_Machine;
    char Room_Type[10], description[20];
} h1;

int main()
{
    cout << "House - 1" << endl;
    cout << "Enter no of people in House: ";
    cin >> h1.People;
    cout << "Enter Room No: ";
    cin >> h1.Room_No;
    cout << "(Select: Deluxe, Premium, Extra Premium)" << endl;
    cout << "Enter Room Type :- ";
    cin >> h1.Room_Type;
    cout << "Enter no of Bed: ";
    cin >> h1.Bed;
    cout << "Enter no of TV: ";
    cin >> h1.Tv;
    cout << "Enter no of Fridge: ";
    cin >> h1.fridge;
    cout << "Enter no of Washing-Machine: ";
    cin >> h1.Washing_Machine;
    cout << "Description: ";
    cin >> h1.description;
    cout<<"\n\n";

    cout << "|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|\n";
    cout << "This is the details of House - 1 " << endl;
    cout << "|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|^|\n";
    cout << "Number of people in house: " << h1.People << endl
         << "Room No: " << h1.Room_No << endl
         << "Room Type: " << h1.Room_Type << endl
         << "Number of Bed: " << h1.Bed << endl
         << "Number of TV: " << h1.Tv << endl
         << "Number of Fridge: " << h1.fridge << endl
         << "Number of Washing-Machine: " << h1.Washing_Machine << endl
         << "Description of Home: "<<h1.description<<endl;
    return 0;
}