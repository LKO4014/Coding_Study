#include <iostream>
using namespace std;

int main()
{
	int num = 666;
	int n;
	cin >> n;
	if (n <= 6) {
		num += (n - 1) * 1000;
	}
	else {
		num = 6660;
		n -= 6;
		int a = n / 20;
		int b = n % 20;
		
		num += a * 10000;
		if (b < 10) {
			num += b;
		}
		else {
			num += 1000 * b;
		}
	}
	cout << num;
}

