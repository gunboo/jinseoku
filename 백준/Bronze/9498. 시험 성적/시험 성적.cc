#include <iostream>
using namespace std;

int main()
{
    int grade;
    cin >> grade;

    if (90 <= grade && grade <= 100) {
        cout << "A" << endl;
    }
    else if (80 <= grade && grade < 90)
    {
        cout << "B" << endl;
    }
    else if (70 <= grade && grade <= 79)
    {
        cout << "C" << endl;
    }
    else if (60 <= grade && grade <= 69)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    return 0;
}