// Cricket score board

#include <iostream>
#include <string.h>
using namespace std;

class Player
{
private:
    int playerNo, totalMatch, score;
    // string name
    char name[100];

public:
    void addDetail()
    {
        cout << "Enter Player No: ";
        cin >> playerNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Match Score: ";
        cin >> score;
        cout << "Enter Total Match Score: ";
        cin >> totalMatch;
    }
    void showDetail()
    {
        cout << "Player No: " << playerNo << endl;
        cout << "Name: " << name << endl;
        cout << "Match Score: " << score << endl;
        cout << "Total Match Score: " << totalMatch << endl;
    }
} s;

int main()
{

    s.addDetail();
    // score=100; <= this is outside of private delecaration is not valid

    cout << endl;
    s.showDetail();

    return 0;
}