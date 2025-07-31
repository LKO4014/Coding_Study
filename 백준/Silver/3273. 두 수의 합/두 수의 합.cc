#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> num;
    int n, x;
    cin >> n;
    int count = 0;

    int *arr = new int[n];
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        num.insert(tmp);
        arr[i] = tmp;
    }

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (num.find(x - arr[i]) != num.end()) {
            count++;
        }
    }

    cout << count / 2;
}