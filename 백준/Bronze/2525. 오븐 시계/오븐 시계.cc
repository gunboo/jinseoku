#include <iostream>
using namespace std;

int main()
{
    int h, m, t;
    cin >> h >> m;
    cin >> t;

    m += t; //현재 분에 추가할 분을 더함 (m+t) / 60
    h += m / 60; //전체 분을 시간으로 변환하여 현재 시간에 더함
    m %= 60; //전체 분을 60으로 나눈 나머지를 분으로 설정
    h %= 24; // 24시간 형식으로 변환

    cout << h << " " << m << endl;
    
    return 0;
}