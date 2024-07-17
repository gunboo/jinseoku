#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    
    string numbers; //문자열
    cin >> numbers; //숫자들을 문자열로 입력
    for (int i = 0; i < n; i++) {
       
        sum += numbers[i] - '0'; //아스키 코드를 활용하여 각 자리 수 구하기
    }
    cout << sum << endl;

    return 0;
}