#include <iostream>
using namespace std;

int main()
{
    long long min, max;
    long long tmp;
    int n;
    cin >> n;
    cin >> tmp;
    min = tmp;
    max = tmp;
    for (int i = 1; i < n; i++) {
        cin >> tmp;
        if (min > tmp) {
            min = tmp;
        }
        if (max < tmp) {
            max = tmp;
        }
    }

    tmp = max * min;
    cout << tmp;
}