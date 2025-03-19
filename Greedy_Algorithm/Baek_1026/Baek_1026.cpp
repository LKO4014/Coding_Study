#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        b[i] = tmp;
    }

    cout << "\n";
    sort(a, a+n);
    sort(b, b + n);


    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        tmp = a[i] * b[n - 1 - i];
        sum += tmp;
    }
    cout << sum;
}
