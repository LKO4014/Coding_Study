#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	bool student[30] = { false };

	int tmp;
	for (int i = 0; i < 28; i++) {
		cin >> tmp;
		student[tmp-1] = true;
	}

	int count = 2;
	int index = 0;
	while (count > 0) {
		if (student[index] == false) {
			cout << index + 1 << "\n";
			count--;
		}
		index++;
	}
}
