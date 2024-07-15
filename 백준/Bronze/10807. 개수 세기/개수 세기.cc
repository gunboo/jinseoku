#include <iostream>
using namespace std;

int main()
{   
    int n, a[101], v, num = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> v;
    for (int i = 0; i < n; i++) {
        if (a[i] == v) num++;
    }
    cout << num << endl;
    
    return 0;
}