#include <iostream>
#include <cstring>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    char a[1001];
    for (int i = 0; i < t; i++) {
        cin >> a;
        int len = strlen(a); //길이 저장
        cout << a[0] << a[len - 1] << endl; //a[len-1]은 문자열의 마지막 문자를 가리킴 -1은 널문자를 뺀것.
    }

    return 0;
}