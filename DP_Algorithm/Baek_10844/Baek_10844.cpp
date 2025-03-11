#include <iostream>
#include <vector>

using namespace std;

int trinum(int n) {
    return n * (n + 1) / 2;
}

int main()
{
    // 이 문제는 '삼각수'라는 개념을 사용해야 풀 수 있음 (배경 지식)

    vector<int> answer;
    vector<int> tring;
    int n;
    cin >> n;
    tring.push_back(1);
    tring.push_back(2);
    for (int i = 2; i <= n; i++) {
        tring.push_back(trinum(tring[i - 1]));
    }

    for (int i = 0; i < n; i++) {
        cout << tring[i] << " ";
    }
}
