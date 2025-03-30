
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int sum(vector<int> n)
{
    int k = 0;
    for (int i = 0; i < n.size(); i++) {
        k += n[i];
    }
    return k;
}

int main()
{
    vector<int> tri;
    int a, b, c;
    cin >> a >> b >> c;
    tri.push_back(a);
    tri.push_back(b);
    tri.push_back(c);
    sort(tri.begin(), tri.end());
    int sums = sum(tri);
    int compare = tri[0] + tri[1];
    if (compare> tri[2]) {
        cout << sums;
    }
    else if (compare == tri[2]) {
        cout << sums - 1;
    }
    else {
        int tmp = tri[2] - compare;
        cout << sums - tmp - 1;
    }
}