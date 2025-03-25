#include <iostream>
#include <vector>
using namespace std;

static vector<pair<int, int>>* vec;

// 하노이 횟수 반환
int COUNT(int a) {
    if (a == 1)
        return 1;
    else
        return 2 * COUNT(a - 1) + 1;
}

// 치환 함수에서 vec[a-1]을 사용함. 인덱스 오류 문제 발생 가능성이 있으니, 이 점 유의하여 풀어야함

// a-1 인덱스의 vector 배열에서 2>>3 , 3>>2로 바꾼 벡터 배열을 반환하는 함수
vector<pair<int, int>> subsit_first(int a) {
    vector<pair<int, int>> answer;
    for (int i = 0; i < vec[a - 1].size(); i++) {
        int tmp1, tmp2;
        int tmp_f = vec[a - 1][i].first;
        int tmp_b = vec[a - 1][i].second;

        if (tmp_f == 2) {
            tmp1 = 3;
        }
        else if (tmp_f == 3) {
            tmp1 == 2;
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
}

// a-1 인덱스의 vector 배열에서 1>>2 , 2>>1로 바꾼 벡터 배열을 반환하는 함수
vector<pair<int, int>> subsit_sec(int a) {
    vector<pair<int, int>> answer;
    for (int i = 0; i < vec[a - 1].size(); i++) {
        int tmp1, tmp2;
        int tmp_f = vec[a - 1][i].first;
        int tmp_b = vec[a - 1][i].second;

        if (tmp_f == 1) {
            tmp1 = 2;
        }
        else if (tmp_f == 2) {
            tmp1 == 1;
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
}

vector<pair<int,int>> hanoi(int a) {
    vector<pair<int, int>> answer;
    if (a == 1) {
        answer.push_back(make_pair(1, 3));
        vec[a - 1] = answer;
        return answer;
    }
    else {
        //vec[a-1]를 만드는 함수 (재귀)
        // vec[a-1] = vec[a-2] 의 subsit_first + (1,3) + subsit_sec 
        // 함수가 반환하지 않고 vec으로 바로 올릴 수 있도록 해야하나? void 형 선언?

        answer = hanoi(subsit_first(a-1))

        vec[a - 1] = answer;
    }
}

int main()
{
    int n;
    cin >> n;
    int count = COUNT(n);

    cout << n << " " << count<<"\n";

    vec = new vector<pair<int,int>>[n];

}

