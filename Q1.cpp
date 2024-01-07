// 1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

#include <iostream>
using namespace std;

class distance
{
public:
    int feet;
    float inch;
} d1, d2, sum;

int main()
{
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet:";
    cin >> d1.feet;
    cout << "Enter inch:";
    cin >> d1.inch;

    cout << "\nEnter 2st distance," << endl;
    cout << "Enter feet:";
    cin >> d2.feet;
    cout << "Enter inch:";
    cin >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // if inch is greather than 12
    int extra;
    if (sum.inch > 12)
    {
        // extra inch
        extra = sum.inch / 12;
        sum.feet += extra;
        sum.inch -= (extra * 12);
    }
    cout << endl
         << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}