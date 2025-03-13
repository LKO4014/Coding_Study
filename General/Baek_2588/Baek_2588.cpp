#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	int* lst = new int[n];

	int a, b, c;

	for (int i = 0; i < n; i++) {
		lst[i] = 0;
	}

	for (int i = 0; i < m;i++) {
		cin >> a >> b >> c;
		for (int j = a-1; j < b-1; j++) {
			lst[j] = c;
		}
	}

	for (int i = 0; i<n; i++) {
		cout << lst[i] << " ";
	}
}