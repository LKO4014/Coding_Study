#include <iostream>
#include <vector>
using namespace std;

void PRINT_VEC(vector<int>& n) {
    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    }
    cout << "\n";
}

// 버블정렬
// 어떠한 경우에도 최선, 최악, 평균 모두 시간 복잡도는 O(n^2)
void bubble(vector<int>& n) {
    for (int i = 0; i < n.size(); i++) {
        for (int j = 1; j < n.size() - i;j++) {
            if (n[j - 1] > n[j]) {
                swap(n[j - 1], n[j]);
            }
        }
    }
}

// 선택 정렬
void select(vector<int>& n) {
    int indexmin;
    for (int i = 0; i < n.size() - 1; i++) {
        indexmin = i;
        for (int j = i + 1;j < n.size(); j++) {
            if (n[j] < n[indexmin]) {
                indexmin = j;
            }
        }
        swap(n[i], n[indexmin]);
        PRINT_VEC(n);
    }
}

// 삽입 정렬
void insert(vector<int>& n) {

}

int main()
{
    vector<int> arr = { 2,3,1,8,9,4 };
    insert(arr);
}