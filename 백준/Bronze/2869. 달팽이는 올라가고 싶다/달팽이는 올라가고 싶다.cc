#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, v;
    cin >> a >> b >> v;

    double va = v - a;
    double ab = a - b;
    double div = va / ab;

    cout << int(ceil(div)) + 1;

    return 0;
}