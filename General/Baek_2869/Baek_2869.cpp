#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int m = c - a;
    int l = m / (a - b);
    cout << l + 1;
}
