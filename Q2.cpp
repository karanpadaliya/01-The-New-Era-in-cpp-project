// 2. WAP to create a class to read and add two times.

#include <iostream>
using namespace std;

class time
{
public:
    int hour, min;
} t1, t2, sum;

int main()
{
    cout << "Enter First Time" << endl;
    cout << "Enter the hours: ";
    cin >> t1.hour;
    cout << "Enter the minutes: ";
    cin >> t1.min;

    cout << "\nEnter secound Time" << endl;
    cout << "Enter the hours: ";
    cin >> t2.hour;
    cout << "Enter the minutes: ";
    cin >> t2.min;

    sum.hour = t1.hour + t2.hour;
    sum.min = t1.min + t2.min;
    int extra;
    // if minutes grather then 60 minutes
    if (sum.min > 60)
    {
        extra = sum.min / 60;
        sum.hour += extra;
        sum.min -= (extra * 60);
    }
    cout << "The sum of two times is: " << sum.hour << " hours "
         << " : " << sum.min << " minutes" << endl;
    return 0;
}