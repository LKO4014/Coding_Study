#include <iostream>
#include <vector>
using namespace std;

vector<int> us;
// 1 10000 의 출력값 : M 2550
// 정답 M 2505
int demand(int sec, int per) {
	int count = 0;
	for (int i = 0; i < us.size(); i++) {
		//이 부분!!
		count += us[i] / (sec+1) * per;
		if (us[i] % sec != 0) {
			count += per;
		}
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		us.push_back(tmp);
	}
	int Y = demand(29, 10);
	int M = demand(59, 15);
	if (Y < M) {
		cout << "Y " << Y;
	}
	else if (Y > M) {
		cout << "M " << M;
	}
	else {
		cout << "Y M " << Y;
	}
}

