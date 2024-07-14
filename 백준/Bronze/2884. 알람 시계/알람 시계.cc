#include <iostream>
using namespace std;

int main()
{
    int hour, minute;
    cin >> hour >> minute;

    if (hour > 1 && minute < 45 )
    {
        hour = hour - 1;
        minute = minute + 15;
            cout << hour  << " " << minute << endl;
    }
    else if (hour == 0 && minute < 45)
    {
        hour = 23;
        minute = minute + 15;
        cout << hour  << " " << minute << endl;
    }
    else if (minute >= 45)
    {
        minute -= 45;
        cout << hour  << " " << minute << endl;
    }
    else
    {
        hour = hour - 1;
        minute = minute + 15;
        cout << hour  << " " << minute << endl;
        
    }


    
    return 0;
}