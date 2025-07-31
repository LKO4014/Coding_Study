// Baek_10845.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> queue;
    string cmd;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        int mysize = queue.size();
        if (cmd == "pop") {
            if (mysize == 0) {
                cout << "-1\n";
            }
            else {
                cout << queue[0] << "\n";
                queue.erase(queue.begin());
            }
        }
        else if (cmd == "size") {
            cout << queue.size() << "\n";
        }
        else if (cmd == "empty") {
            if (queue.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (cmd == "front") {
            if (mysize == 0) {
                cout << "-1\n";
            }
            else {
                cout << queue[0] << "\n";
            }
        }
        else if (cmd == "back") {
            if (mysize == 0) {
                cout<<"-1\n";
            }
            else {
                cout << queue[mysize - 1] << "\n";
            }
        }
        else {
            int num;
            cin >> num;
            queue.push_back(num);
         }
    }
	return 0;
}
