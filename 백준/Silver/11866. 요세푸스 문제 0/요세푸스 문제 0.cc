#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int q[1001];
	int max = 1001;
	int front = 0;
	int rear = 0;
	int size = 0; //현재 큐 크기

	for (int i = 0; i < n; i++) {
		q[i] = i + 1;
		size++;
		rear++;
	}

	cout << "<";

	while (size > 0) {
		for (int i = 1; i < k; i++) {
			q[rear] = q[front]; 
			rear = (rear + 1) % max;
			front = (front + 1) % max;
		}
		cout << q[front]; //k번째에 있는 수 pop
		front = (front + 1) % max;
		size--;
		if (size > 0) cout << ", ";
	}
	cout << ">";

	return 0;
}