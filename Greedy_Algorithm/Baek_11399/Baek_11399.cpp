#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> peo;
    int n;
    cin >> n;
    int p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        peo.push_back(p);
    }
    sort(peo.begin(), peo.end());
    int sum = 0;
    vector<int> add;
    for (int i = 0;i < n; i++) {
        sum = sum + peo[i];
        add.push_back(sum);
    }
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += add[i];
    }
    cout  << sum;
}