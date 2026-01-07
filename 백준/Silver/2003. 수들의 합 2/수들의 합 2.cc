#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<long long> num;
    long long temp;
    int answer = 0;
    int n, m;
    cin >> n>>m;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        num.push_back(temp);
    }

    int start = 0;
    int end = 1;
    long long sum = num[start];

    while (start < n) {
        while (end < n && sum < m) {
            sum += num[end];
            end++;
        }
        if (sum == m) {
            answer++;
        }
        sum -= num[start];
        start++;
    }
    cout << answer;
    return 0;
}