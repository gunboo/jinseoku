#include <iostream>
#include <string>

using namespace std;

int main() {
	//입출력 빠르게 하는 코드
	ios::sync_with_stdio(false);
	//icn나오면 바로 cout나오게 하는 코드
	cin.tie(NULL);

	//큐 넣을 공간
	int queue[2000000];
	//큐에 들어 있는지 없는지 확인하는 정수 (push하면 ++1) 즉 맨 마지막 수를 가리킴
	int first = -1;
	//FIFO를 하기 위해 처음에 있는 수를 가리키기 위한 정수 (pop하면 ++1) 
	int bottom = 0; 
	
	int n;
	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			//push
			int num;
			cin >> num;
			queue[++first] = num;
			
		}

		else if (cmd == "pop") {
			//pop (가장 앞에 있는 정수 빼기 FIFO)
			if (bottom > first) {
				cout << -1 << '\n';
			}
			else
				cout << queue[bottom++] << '\n';

		}

		else if (cmd == "size") {
			//size 
			if (bottom > first)
				cout << 0 << "\n";
			else
				cout << first - bottom + 1 << '\n';

		}

		else if (cmd == "empty") {
			//empty
			if (bottom > first)
				cout << 1 << '\n';
			else cout << 0 << '\n';
		}

		else if (cmd == "front") {

			//front
			if (bottom > first)
				cout << -1 << '\n';
			else 
				cout << queue[bottom] << '\n';

		}

		else if (cmd == "back") {
			//back
			if (bottom > first) //비어있으면
			cout << -1 << '\n';
			else 
				cout << queue[first] << '\n';
		}
	}
	
	return 0;
}