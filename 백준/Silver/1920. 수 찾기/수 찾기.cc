#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int* num = new int[n];
	for(int i=0; i<n; i++)
	{
		cin >> num[i];
	}
	unordered_set<int> a;
	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		a.insert(num[i]);
	}

	int tmp;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		if (a.find(tmp) != a.end()) {
			cout << "1";
		}
		else {
			cout << "0";
		}
		cout << "\n";
	}

}