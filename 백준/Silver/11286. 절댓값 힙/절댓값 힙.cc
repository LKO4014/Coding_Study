#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    int n;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0) {
            pq.push(make_pair(-x, x));
        }
        else if(x>0) {
            pq.push(make_pair(x, x));
        }
        else {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top().second << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}