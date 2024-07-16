#include <iostream>
#include <cstring>
using namespace std;

int main()
{   
    char a[101];
    cin >> a;
    int num = 0;
    
    for (int i = 0; i < strlen(a); i++) {
        num++;
    }
    cout << num << endl;
    return 0;
}