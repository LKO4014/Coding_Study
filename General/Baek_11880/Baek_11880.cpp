#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	vector<long long> answer;
	int T;
	cin >> T;
	long long a, b, c;
	for (int i = 0; i < T; i++) {
		cin >> a >> b >> c;
		long long one, two, thr;
		long long min;
		one =(pow(a + b, 2) + pow(c, 2));
		min = one;
		two = (pow(a + c, 2) + pow(b, 2));
		if (min > two)
			min = two;
		thr = (pow(b + c, 2) + pow(a, 2));
		if (min > thr)
			min = thr;

		answer.push_back(min);
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << "\n";
	}
}