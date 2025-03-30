
#include <iostream>
#include<unordered_map>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<string, int> str;
    unordered_map<int, string> num;
    vector<string> ans;
    string n;
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        cin >> n;
        str[n] = i + 1;
        num[i + 1] = n;
    }
   
    for (int i = 0; i < b; i++) {
        cin >> n;
        int chg;
        try {
            chg = stoi(n);
            auto fd = num.find(chg);
            if (fd != num.end()) {
                cout << fd->second << "\n";
            }
        }
        catch (const invalid_argument& e) {
            auto fd = str.find(n);
            if (fd != str.end()) {
                cout << fd->second << "\n";
            }
        }

    }
}
