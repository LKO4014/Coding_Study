#include <iostream>
#include<String>
#include<vector>
using namespace std;

vector<int>answer;
vector<int> num;
int tmp;
int ten = 0;
int i;

int Big(int index) {
	int ans = ten * 10 + num[index];
	i++;
	answer.push_back(ans);
	return ans;
}

int Same(int index) {
	int ans = (1 + ten) * 10 + num[index];
	i++;
	ten++;
	answer.push_back(ans);
	return ans;
}

int Sml(int index) {
	int cmp1 = (1 + ten) * 10 + num[index];

	if (index + 1 < num.size()&&num[index] >= ten && tmp%10<num[index+1]) {
		int cmp2 = num[index] * 10 + num[index + 1];
		if (cmp2 < cmp1) {
			cmp1 = cmp2;
			i++;
			ten++;
		}
	}
	i++;
	answer.push_back(cmp1);
	return cmp1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	string n;
	cin >> n;
	for (int i = 0; i < n.size(); i++) {
		num.push_back(n[i] - '0');
	}

	if (num[0] == 0) {
		tmp = 10;
		ten = 1;
	}
	else {
		tmp = num[0];
	}

	cout <<"초기 수 : "<< tmp << "\n";

	int size = num.size();
	for (i = 1; i < size;) {
		if (num[i - 1] < num[i]) {
			Big(i);
		}
		else if (num[i - 1] == num[i]) {
			Same(i);
		}
		else {
			Sml(i);
		}
		ten = answer[answer.size() - 1] / 10;
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}

	cout << "\n" << "최소 수 : " << answer[answer.size() - 1];
}
