#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int basket[101] = { 0 };

    for (int i = 0; i < m; i++) {
        int start, end, k;
        cin >> start >> end >> k;

        for (int j = start; j <= end; j++) {
            basket[j] = k;
        }
    }
    for (int k = 1; k <= n; k++) {
        cout << basket[k] << " ";
    }
   
    return 0;
}