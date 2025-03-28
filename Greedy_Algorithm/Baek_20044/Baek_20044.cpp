#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> num;
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < 2 * n; i++) {
        cin >> tmp;
        num.push_back(tmp);
    }
    sort(num.begin(), num.end());

    int sum=200000;
    for (int i = 0; i < n; i++) {
        int tmp = num[i] + num[2 * n - 1 - i];
        if (tmp < sum)
            sum = tmp;
    }
    cout << sum;
}
