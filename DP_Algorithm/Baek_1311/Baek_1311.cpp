#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>** vec = new vector<int>*[n];
    vector<int> check;

    for (int i = 0; i < n; i++) {
        check.push_back(i);
    }
    int sum = 0;

    for (int i = 0; i < n;i++) {
        vec[i] = new vector<int>[n];
    }
    int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tmp;
            vec[i]->push_back(tmp);
        }
    }

    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (*vec[i])[j] << " ";
        }
        cout << "\n";
    }
    */
    //배치된 인원을 제외하고 최소비용으로 일을 배치

    for (int j = 0; j < n; j++) {  
        int min = 10000;
        int index;
        for (int i = 0; i < check.size(); i++) { 
            if ((*vec[check[i]])[j] < min) {
                min = (*vec[check[i]])[j];
                index = i;
            }
        }
        sum += min;
        check.erase(check.begin() + index);
    }

    cout << sum;
}

