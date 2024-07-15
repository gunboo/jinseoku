#include <iostream>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false); //빠른 출력을 위해 c++표준 스트림과 
                                 //c표준 스트림의 동기화 해제
    cin.tie(NULL);  //cin과 cout의 묶음 풀기

    int a, b, num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    
    return 0;
}