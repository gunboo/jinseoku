#include <iostream>
#include <string>

using namespace std;


int main() {
	int stack[10000];
	int top = -1;

	int n;
	cin >> n; //명령의 수 

	while (n--) {
		string cmd;
		cin >> cmd;

		//push X - 스택에 정수 X넣기 (맨뒤에서 넣는게 좋다...)어떻게구현하지
		if (cmd == "push") {
			int x;
			cin >> x;
			stack[++top] = x;
		}
		//pop - 가장 위에있는 수 빼서 출력, 없으면 -1출력
		else if (cmd == "pop") {
			if (top == -1) cout << -1 << '\n';
			else {
				cout << stack[top] << '\n';
				stack[top--] = -1;
			}
		}
		else if (cmd == "top") {
			//top - 스택의 가장 위에 있는 정수를 출력, 없으면 -1출력
			if (top == -1) cout << -1 << '\n';
			else {
				cout << stack[top] << '\n';
			}
		}
		else if (cmd == "size") {
			//size - 스택에 들어있는 정수의 개수 출력!
			cout << top + 1 << '\n'; 
		}
		//empty - 스택이 비어있으면 1, 아니면 0을 출력
		//데이터로 비교하는게 아닌 flag num으로 비교해야함
		else if (cmd == "empty") {
			if (top == -1) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
	}

	
	

	

	

	
	return 0;
}