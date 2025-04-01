#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int m = c - a;
    int l = m / (a - b);
    int lls = m % (a - b);
    if (lls != 0) {
        cout << l + 1;
    }
    else{
        cout << l;
    }

    //another method
    cout << "\n";
    int count = 1;
    int start = a;
    int tmp = (c - a);
    cout << "tmp : " << tmp << "\n";
    if (tmp % 2 != 0) {
        cout << tmp + 1;
    }
    else {
        cout << tmp + 2;
    }
}
