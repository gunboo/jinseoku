#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int queue[1000000];
	int front = 0; //맨 처음 것을 가리킴
	int back = n; //front 다음 것을 가리킴
	

	
	//1~n까지 오름차순으로 큐 만듦
	for (int i = 0; i < n; i++) {
		queue[i] = i + 1;
	}

	while (back - front > 1) {
		//맨 위를 버려 == 맨 처음 pop
		front++;

		//다음 카드를 맨 마지막 순서로 가 == push
		queue[back++] = queue[front++];
	}

	cout << queue[front];
	return 0;
}