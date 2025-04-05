#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> num;
    for (int i = 0; i < n; i++) {
        num.push_back(i + 1);
    }
    int tmp;
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        if (a != b) {
            tmp = num[a - 1];
            num[a - 1] = num[b - 1];
            num[b - 1] = tmp;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
}
