#include <iostream>
using namespace std;

int people(int top, int room) {
	if (room == 1) {
		return 1;
	}
	if (top == 0) {
		return room;
	}
	else {
		return people(top - 1, room) + people(top, room-1);
	}
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int top, room;
		cin >> top >> room;
		cout << people(top, room) << "\n";
	}
}
