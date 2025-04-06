#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, string>> stu;

int main()
{
	int n;
	int age;
	string name;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		stu.push_back(make_pair(age, name));
	}

	sort(stu.begin(), stu.end());
	for (int i = 0; i < n; i++) {
		cout << stu[i].first << " " << stu[i].second << "\n";
	}
}