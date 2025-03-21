#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> listen;
	vector<string> no;
	string tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		listen.push_back(tmp);
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		for (int i = 0; i < n; i++) {
			if (listen[i] == tmp) {
				no.push_back(tmp);
			}
		}
	}

	cout << no.size();
	for (int i = 0; i < no.size(); i++) {
		cout << "\n" << no[i];
	}
}
