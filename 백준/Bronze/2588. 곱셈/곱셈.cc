#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;

    int temp1, temp2, temp3;
    int result;

    temp1 = num1 * (num2 % 10);
    temp2 = num1 * ((num2 / 10) % 10);
    temp3 = num1 * (num2 / 100);

    cout << temp1 << endl;
    cout << temp2 << endl;
    cout << temp3 << endl;

    result = (temp1)+(temp2 * 10) + (temp3 * 100);
    cout << result << endl;

    return 0;
}