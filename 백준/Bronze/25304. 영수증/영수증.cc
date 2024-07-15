#include <iostream>
using namespace std;

int main()
{   
    long  X;
    int N, a = 0, b = 0;
    int temp = 0;
   
    cin >> X;
    cin >> N;
   

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        temp += (a * b);
    }
    if (X == temp) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}