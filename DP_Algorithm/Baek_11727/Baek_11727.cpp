#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<long> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == 1 || i == 2) {
            if (i == 0)
                vec.push_back(1);
            else if (i == 1)
                vec.push_back(3);
            else if (i == 2) {
                vec.push_back(5);
            }
        }
        else {
            int tmp = vec[i - 1];
            tmp += vec[i - 2] * (vec[n - i + 2] - 1);
            vec.push_back(tmp%10007);

        }
    }
    cout << vec[vec.size() - 1];
}