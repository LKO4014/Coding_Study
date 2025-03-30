#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;

    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        num.push_back(tmp);
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        cout << (num[i]) << " ";
    }
}
