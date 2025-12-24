#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int target[50]; //뽑을 숫자 받을 공간
	int size = n;

	for (int i = 0; i < m; i++) {
		cin >> target[i];
	}

	int q[51];

	for (int i = 0; i < n; i++) { //push
		q[i] = i + 1;
	}
	
	int count = 0; //출력 횟수 저장

	for (int t = 0; t < m; t++) {
		int pos = 0;

		for (int i = 0; i < size; i++) {
			if (q[i] == target[t]) {
				pos = i;
				break;
			}
		}
		//2번(왼쪽)으로 회전
		if (pos <= size / 2)
			while (q[0] != target[t]) {
				int temp = q[0];
				for (int i = 0; i < size - 1; i++) {
					q[i] = q[i + 1];
				}
				q[size - 1] = temp;
				count++;
			}

		//3번(오른쪽)으로 회전
		else  {
			while (q[0] != target[t]) {
				int temp = q[size - 1];
				for (int i = 0; i < size - 1; i++) {
					q[size - 1 - i] = q[size - 2 - i];
				}
				q[0] = temp;
				count++;
			}
		}
		
		for (int i = 0; i < size - 1; i++) {
			q[i] = q[i + 1];
		}
		size--;
	}
	cout << count;
	return 0;
}