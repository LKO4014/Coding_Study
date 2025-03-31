
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<string> line;
    string tmp;
    cin >> n;

    int ans_x = 0;
    int ans_y = 0;

    for (int i = 0; i < n; i++) {
        int seat=0;
        int count = 0;
        cin >> tmp;
        for (int j = 0; j < n; j++) {
            if (tmp[j] == '.') {
                count++;
            }
            else {
                if (count > 0) {
                    if (count >= 2)
                        seat++;
                    count = 0;
                }
            }
            line.push_back(tmp);
            ans_x += seat;
        }
    }
    cout << ans_x;
}
