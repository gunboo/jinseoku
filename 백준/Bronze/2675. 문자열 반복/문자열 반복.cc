#include <iostream>
#include <cstring>
using namespace std;

int main()
{   
    int num; //입력받기
    cin >> num;

    for (int i = 0; i < num; i++) {
        int num1; //반복 입력 받을 숫자
         string s; //반복할 문자
        cin >> num1 >> s; //입력받기
        
        string result = ""; //반복한 문자열을 저장할 공간
 
        for (int j = 0; j < s.length(); j++) { //문자열 길이만큼 반복
            for (int k = 0; k <num1; k++) { //입력받은만큼 복사
                result += s[j]; 
            }
        }
        cout << result << endl;
    } 

    
    return 0;
}