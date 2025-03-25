#include <iostream>
#include <vector>
using namespace std;
enum V{open=0, close};
vector<bool> vec;
vector<string> answer;
int VPS(string n) {
    int open = 0;
    if (n[0] == ')' || n[n.size() - 1] == '(') {
        return 1;
    }
    else {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == '(') {
                vec.push_back(true);
            }
            else{
                if (vec.size() != 0) {
                    vec.pop_back();
                }
                else {
                    return 1;
                }
            }
        }
    }

    if (vec.size() != 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        (VPS(str) == 1) ? answer.push_back("NO") : answer.push_back("YES");
        vec.clear();
    }

    for (int i = 0;i < answer.size(); i++) {
        cout << answer[i] << "\n";
    }
}
