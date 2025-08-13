#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string target;
	cin >> target;
	int count = 0;
	for (int i = 0; i < target.size();) {
		if (target[i] == 'c') {
			if (target[i + 1] == '=') {
				count++;
				i += 2;
				continue;
			}
			else if (target[i + 1] == '-') {
				count++;
				i += 2;
				continue;
			}
		}
		else if (target[i] == 'd') {
			if (target[i + 1] == 'z' && target[i + 2] == '=') {
				count++;
				i += 3;
				continue;
			}
			else if (target[i + 1] == '-') {
				count++;
				i += 2;
				continue;
			}
		}
		else if (target[i] == 'l' && target[i + 1] == 'j') {
			count++;
			i += 2;
			continue;
		}
		else if (target[i] == 'n' && target[i + 1] == 'j') {
			count++;
			i += 2;
			continue;
		}
		else if (target[i] == 's' && target[i + 1] == '=') {
			count++;
			i += 2;
			continue;
		}
		else if (target[i] == 'z' && target[i + 1] == '=') {
			count++;
			i += 2;
			continue;
		}

		count++;
		i++;
	}

	cout << count;
}