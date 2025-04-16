
#include <iostream>
#include <thread>

using namespace std;

void say_hello() {
	cout << "Hello from thread!" << "\n";
}

void say_bye() {
	cout << "Bye from thread!" << "\n";
}

void print_num(int n) {

}

int main()
{
	thread t(say_hello);
	thread q(say_bye);
	cout << "Hello from main!" << "\n";

	t.join();
	q.join();
	return 0;
}
