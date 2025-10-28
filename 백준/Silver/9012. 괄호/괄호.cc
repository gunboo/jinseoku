#include <iostream>
#include <string>

using namespace std;


int main() {
	int num;
	cin >> num;

	string ps;
	
	//op == 40, cl == 41
	for (int i = 0; i < num; i++) {
		int balance = 0;
		bool valid = true;

		cin >> ps;
		
		for (int j = 0; j < ps.length(); j++) {
			if (ps[j] == '(') balance++;
			else if (ps[j] == ')') balance--;
			//괄호 문자열 검사
			if (balance < 0) {
				valid = false;
				break;
			}
		}
		if (valid && balance == 0) cout << "YES" << '\n';
		else cout << "NO" << '\n';
		
	}

	
	return 0;
}

