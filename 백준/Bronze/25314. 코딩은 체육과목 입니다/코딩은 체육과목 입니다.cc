#include <iostream>
using namespace std;

int main()
{   
    long long N;
    cin >> N;

    for (int i = 1; i <= N; i += 4) {
        cout << "long ";
    }
    cout << "int" << endl;
    
    return 0;
}