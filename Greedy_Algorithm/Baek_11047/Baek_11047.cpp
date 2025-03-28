#include <iostream>
#include<vector>
using namespace std;

vector<int> value;
vector<int> ans;
int n, k;
int t;

int remain() {
    for (int i = t; i >= 0; i--) {
        if (k - value[i] >= 0) {
            return i;
        }
    }
}

int coinSum() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ans[i];
    }
    return sum;
}

int main()
{
    cin >> n >> k;
    int mon;
    for (int i = 0; i < n; i++) {
        ans.push_back(0);
    }
    for (int i = 0; i < n; i++) {
        cin >> mon;
        value.push_back(mon);
    }
    t = n - 1;

    while (k != 0) {
        int tmp = remain();
        int div = k/value[tmp];
        ans[tmp] = (div);
        k -= div * value[tmp];
    }

    cout << coinSum();
    
}
