#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int init = 6660;
    int answer;
    if (n == 1) {
        cout << "666";
    }
    else if (n < 7) {
        cout << n - 1 << "666";
    }
    else {
        int tmp = n - 7;
        int count = tmp / 19;
        tmp %= 19;

        cout << count << " " << tmp << "\n";
        answer = count * 10000 + init;
        cout << answer << "\n";
        if (tmp < 10) {
            answer += tmp;
        }
        else {
            tmp -= 10;
            answer += 1006;
            answer += 1000 * tmp;
        }
    }
    cout << answer;
}

