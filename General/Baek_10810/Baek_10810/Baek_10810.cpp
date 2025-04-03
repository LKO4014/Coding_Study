#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int* bucket = new int[n];
    for (int i = 0; i < n; i++) {
        bucket[i] = 0;
    }

    int a, b, c;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        for (int j = a-1; j < b; j++) {
            
            bucket[j] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << bucket[i] << " ";
    }
}
