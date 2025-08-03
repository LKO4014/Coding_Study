#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int* numa = new int[26];
	int* numb = new int[26];
	for (int i = 0; i < 26; i++) {
		numa[i] = 0;
		numb[i] = 0;
	}
	for (int i = 0; i < a.size(); i++) {
		numa[a[i] - 'a']++;
	}
	for (int i = 0; i < b.size(); i++) {
		numb[b[i] - 'a']++;
	}
	int count = 0;
	for (int i = 0; i < 26; i++) 
	{
		if (numa[i] != numb[i]) {
			count += abs(numa[i] - numb[i]);
		}
	}

	cout << count;
}
