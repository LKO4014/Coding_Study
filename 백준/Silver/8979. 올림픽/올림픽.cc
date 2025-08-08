#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	
	int** medal = new int*[n];
	for (int i = 0; i < n; i++) {
		medal[i] = new int[3];
	}
	for (int i = 0; i < n; i++) {
		int country;
		cin >> country;
		int gold, silver, bronze;
		cin>> gold >> silver >> bronze;
		medal[country-1][0] = gold;
		medal[country-1][1] = silver;
		medal[country-1][2] = bronze;
	}

	int goldcount = 0;
	int silvercount = 0;
	int bronzecount = 0;
	for (int i = 0; i < n; i++) {
		if (medal[i][0] > medal[k - 1][0]) {
			goldcount++;
		}
		if (medal[i][0] == medal[k - 1][0] && medal[i][1] > medal[k - 1][1]) {
			silvercount++;
		}
		if (medal[i][0] == medal[k - 1][0] && medal[i][1] == medal[k - 1][1] && medal[i][2] > medal[k - 1][2]) {
			bronzecount++;
		}
	}

	cout << goldcount + silvercount + bronzecount+1;

}
