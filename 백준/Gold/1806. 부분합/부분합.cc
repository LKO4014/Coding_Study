#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, s;
    cin >> n >> s;
    vector<long long> num;
    long long tmp;
    long long answer = n;
    long long early_sum = 0;
    long long start = 0;
    long long end = 1;

    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        num.push_back(tmp);
        early_sum += tmp;
        if (tmp == s)
            answer = 1;
    }
    if (early_sum < s) {
        cout << 0;
        return 0;
    }
    else if (answer == 1) {
        cout << 1;
        return 0;
    }
    else {
        long long sum = num[start];
        while (start < n - 1) {
            while (end < n && sum < s) {
                sum += num[end];
                end++;
            }
            if (end - start < answer && sum>=s)
                answer = end - start;
            sum -= num[start];
            start++;
            
        }
        cout << answer;
        return 0;
    }

    return 0;
}