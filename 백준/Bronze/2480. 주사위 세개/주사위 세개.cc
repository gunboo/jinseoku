#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, prize;
    cin >> n1 >> n2 >> n3;

    if (n1 == n2 && n2 == n3)
    {
        prize = 10000 + (n1 * 1000);
       
    }
   else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        if (n1 == n2)
            prize = 1000 + (n1 * 100);
        else if (n1 == n3)
            prize = 1000 + (n1 * 100);
        else
            prize = 1000 + (n2 * 100);
        
    }
    else
    {
        if (n1 > n2 && n1 > n3)
            prize = n1 * 100;
        else if (n2 > n1 && n2 > n3)
            prize = n2 * 100;
        else prize = n3 * 100;
    }
   
    cout << prize << endl;

    return 0;
}