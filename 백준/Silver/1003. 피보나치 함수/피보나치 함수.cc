#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n;
	int t;
	cin >> t;

	vector<int> num;
	vector<pair<int, int>> dp;

	dp.push_back(make_pair(1,0));
	dp.push_back(make_pair(0,1));

	int max = 0;

	for (int i = 0; i < t; i++) {
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
		if (max < tmp) {
			max = tmp;
		}
	}

	for (int i = 2; i <= max; i++) {
		dp.push_back(make_pair(dp[i - 1].first + dp[i - 2].first, dp[i - 1].second + dp[i - 2].second));
	}

	for (int i = 0; i < num.size(); i++) {
		cout << dp[num[i]].first << " " << dp[num[i]].second << "\n";
	}
}
