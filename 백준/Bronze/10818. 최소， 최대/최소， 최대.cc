#include <iostream>
using namespace std;

int main()
{   
    int n, a[1000000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int min = a[0]; //첫번째 요소로 초기화
    int max = a[0];
    for (int j = 1; j < n; j++) {
        if (a[j] < min) {
            min = a[j];
        }
        if (a[j] > max) {
            max = a[j];
        }

    } cout << min << " " << max << endl;
 
    return 0;
}