
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> num;
	vector<int> ans;
	int N;
	int M;
	int tmp;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		num.push_back(tmp);
	}

	int a, b;
	int sum = 0;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		for (int j = a - 1; j < b ; j++) {
			sum += num[j];
		}
		ans.push_back(sum);
		sum = 0;
	}

	for (int i = 0; i < M; i++) {
		cout << ans[i] << "\n";
	}
}
