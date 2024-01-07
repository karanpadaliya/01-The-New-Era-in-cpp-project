// 3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
// hours = minute = sec
//     1 = 60 = 3600
#include <iostream>
using namespace std;
class time
{
public:
    int hour, min, sec;
} t;

int main()
{
    cout << "Enter time in seconds: ";
    cin >> t.sec;
    // if seconds is grather than 3600
    int extra_min, extra_hour, extra_sec;
    if (t.sec > 3600)
    {
        t.hour += t.min /60;
        t.hour += t.sec / 3600;
        t.min += t.sec / 60;
        extra_min -= (t.sec / 60);
        extra_hour -= (t.sec * 3600);
        extra_sec -= (t.sec / 60);
    }

    cout << "The format is (HH:MM:SS) " << t.hour << " : " << t.min << " : " << t.sec << endl;

    return 0;
}