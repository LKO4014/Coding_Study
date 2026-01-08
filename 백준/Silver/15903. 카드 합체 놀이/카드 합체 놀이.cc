#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<long long, vector<long long>, greater<long long>> q;

    long long n, m, tmp;
    cin >> n >> m;
    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        q.push(tmp);
    }

    for (long long i = 0; i < m; i++) {
        long long one, two;
        one = q.top();
        q.pop();
        two = q.top();
        q.pop();
        long long sum = one + two;
        q.push(sum);
        q.push(sum);
    }

    long long answer = 0;
    while (!q.empty()) {
        answer += q.top();
        q.pop();
    }

    cout << answer;

    return 0;
}