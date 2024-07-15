#include <iostream>
using namespace std;

int main()
{   
    int n, x[10000], a;
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        if (x[i] < a) {
            cout << x[i] << endl;
        }
    }
    
 
    return 0;
}