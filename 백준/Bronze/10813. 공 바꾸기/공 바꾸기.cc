#include <iostream>
using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m; //바구니 수, 몇 번 바꾸는지 입력받기
    int temp = 0; //교환 중간 바구니 생성

    int basket[101] = { 0 };
    for (int a = 1; a <= n; a++) { //바구니 각 번호로 채우기
        basket[a] = a;
    }
    for (int i = 0; i < m; i++) { //바꿀 바구니 입력
        int first, last;
        cin >> first >> last;

           temp = basket[first];
           basket[first] = basket[last];
           basket[last] = temp;
        
    }
    for (int k = 1; k <= n; k++) { //바구니 공 출력
        cout << basket[k] << " ";
    }
    
    
    return 0;
}