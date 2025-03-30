#include <iostream>
#include <vector>
#include <algorithm> 
#define VPAIR vector<pair<int,int>>
#define UINT unsigned long long

using namespace std;
string multiply(const string& num, int multiplier);
void subtractOne(string& num);
string COUNT(int N) {
    // 2^N - 1을 구하기 위해 string을 사용
    if (N == 1) {
        return "1"; // 2^1 - 1 = 1
    }

    // 2^N은 2를 N번 곱한 값, 따라서 2^N - 1은 2^N에서 1을 빼면 된다.
    // 우리는 이 값을 문자열로 반환할 것이므로 pow() 대신 계산을 string으로 처리할 것.
    string result = "1"; // 시작은 2^1 이므로 1부터 시작
    for (int i = 1; i < N; ++i) {
        // 문자열에 2를 곱하는 연산을 구현
        result = multiply(result, 2);
    }
    // 2^N에서 1을 빼기
    subtractOne(result);
    return result;
}

// 문자열로 큰 수를 곱하는 함수 (result = result * 2)
string multiply(const string& num, int multiplier) {
    string result = "";
    int carry = 0;

    // num을 두 배로 늘리기
    for (int i = num.size() - 1; i >= 0; --i) {
        int digit = num[i] - '0'; // 문자를 정수로 변환
        int product = digit * multiplier + carry;
        result.push_back(product % 10 + '0');
        carry = product / 10;
    }

    // carry가 남았다면 결과에 추가
    while (carry) {
        result.push_back(carry % 10 + '0');
        carry /= 10;
    }

    // 결과를 반대로 뒤집어야 함
    reverse(result.begin(), result.end());
    return result;
}

// 문자열로 큰 수에서 1을 빼는 함수 (num = num - 1)
void subtractOne(string& num) {
    int len = num.size();
    int borrow = 1; // 1을 빼므로 borrow는 1로 설정
    for (int i = len - 1; i >= 0 && borrow; --i) {
        if (num[i] == '0') {
            num[i] = '9';
        }
        else {
            num[i]--;
            borrow = 0; // 더 이상 빌려올 필요 없음
        }
    }
}

/*
// 하노이 횟수 반환
UINT COUNT(int a) {
    if (a == 1)
        return 1;
    else
        return 2 * COUNT(a - 1) + 1;
}
*/
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
    string count = COUNT(n);

    cout << count<<"\n";

    
    if (n < 21) {
        hn Hanoi(n);
        Hanoi.hanoi();
        Hanoi.printVec();
    }
    

}

