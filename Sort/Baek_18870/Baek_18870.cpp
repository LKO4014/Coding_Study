#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

struct NUM {
    int count = 1;
    int n;
};

vector<int> num;
vector<int> ans;
vector<NUM> cnt;

void setNUM(int _n) {
    for (int i = 0; i < cnt.size(); i++) {
        if (cnt[i].n > _n) {
            cnt[i].count++;
        }
        else {
            NUM newnum;
            newnum.n = _n;
            cnt.push_back(newnum);
        }
    }
}

int showCount(int index) {
    for (int i = 0; i < cnt.size(); i++) {
        if (num[index] == cnt[i].n) {
            return cnt[i].count;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        num.push_back(tmp);
        setNUM(tmp);
    }

    for (int i = 0; i < n; i++) {
        ans.push_back(showCount(i));
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}


