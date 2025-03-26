#include <iostream>
#include <vector>
#define VPAIR vector<pair<int,int>>
#define UINT unsigned long long

using namespace std;

// 하노이 횟수 반환
UINT COUNT(int a) {
    if (a == 1)
        return 1;
    else
        return 2 * COUNT(a - 1) + 1;
}

class hn {
private:
    int n;
    VPAIR vec;
public:
    hn(int _n) :n(_n) {
        vec = { {1,3} };
    }
    // a-1 인덱스의 vector 배열에서 2>>3 , 3>>2로 바꾼 벡터 배열을 반환하는 함수
    VPAIR subsit_first() {
        vector<pair<int, int>> answer;
        for (UINT i = 0; i < vec.size(); i++) {
            int tmp1, tmp2;
            int tmp_f = vec[i].first;
            int tmp_b = vec[i].second;

            if (tmp_f == 2) {
                tmp1 = 3;
            }
            else if (tmp_f == 3) {
                tmp1 = 2;
            }
            else {
                tmp1 = tmp_f;
            }

            if (tmp_b == 2) {
                tmp2 = 3;
            }
            else if (tmp_b == 3) {
                tmp2 = 2;
            }
            else {
                tmp2 = tmp_b;
            }

            answer.push_back(make_pair(tmp1, tmp2));
        }
        return answer;
    }
    // a-1 인덱스의 vector 배열에서 1>>2 , 2>>1로 바꾼 벡터 배열을 반환하는 함수
    VPAIR subsit_sec() {
        vector<pair<int, int>> answer;
        for (UINT i = 0; i < vec.size(); i++) {
            int tmp1, tmp2;
            int tmp_f = vec[i].first;
            int tmp_b = vec[i].second;

            if (tmp_f == 1) {
                tmp1 = 2;
            }
            else if (tmp_f == 2) {
                tmp1 = 1;
            }
            else {
                tmp1 = tmp_f;
            }

            if (tmp_b == 2) {
                tmp2 = 1;
            }
            else if (tmp_b == 1) {
                tmp2 = 2;
            }
            else {
                tmp2 = tmp_b;
            }

            answer.push_back(make_pair(tmp1, tmp2));
        }
        return answer;
    }

    void add() {
        VPAIR ANSWER;
        VPAIR mid = { make_pair(1,3) };
        VPAIR fir = subsit_first();
        VPAIR se = subsit_sec();

        ANSWER.insert(ANSWER.end(), fir.begin(),fir.end());
        ANSWER.insert(ANSWER.end(), mid.begin(), mid.end());
        ANSWER.insert(ANSWER.end(), se.begin(), se.end());
        vec = ANSWER;
    }

    void hanoi() {
        for (int i = 1; i < n; i++) {
            add();
        }
    }

    void printVec() {
        for (UINT i = 0; i < vec.size(); i++) {
            cout << vec[i].first << " " << vec[i].second << "\n";
        }
    }
};

int main()
{

    int n;
    cin >> n;
    UINT count = COUNT(n);

    cout << count<<"\n";

    
    if (n < 21) {
        hn Hanoi(n);
        Hanoi.hanoi();
        Hanoi.printVec();
    }
    

}

