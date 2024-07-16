#include <iostream>
using namespace std;

int main()
{
    int num[9];
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
    }
    int max = num[0], seq = 1; //최댓값 찾는 int선언, 순서 넣을 seq생성
    for (int j = 1; j < 9; j++) {
        if (num[j] > max) {
            max = num[j]; //최댓값 찾음
            seq = j+1;
        }
    }
    cout << max << endl;
    cout << seq << endl;

    return 0;
}