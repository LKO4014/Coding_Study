#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<long long> answer;
	int tmp;
	int* arr = new int[N];
	cin >> tmp;
	arr[0] = tmp;
	for (int i = 1; i < N; i++) {
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		if (a != 1) {
			answer.push_back( arr[b - 1] - arr[a - 2]);
		}
		else {
			answer.push_back(arr[b - 1]);
		}
	}

	for(int i=0; i<answer.size(); i++)
	{
		cout << answer[i] <<"\n";
	}
}
