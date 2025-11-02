
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int commnum;
    cin >> commnum;
    
    stack<int> stk;

    for (int n = 0; n < commnum; n++) {
        string command;
        cin >> command;
        if (command == "push") {
            int num;
            cin >> num;
            stk.push(num);
        }
        else if (command == "pop") {
            if (stk.empty()) cout << "-1\n";
            else {
                cout << stk.top() << "\n";
                stk.pop();
            }
        }
        else if (command == "size") {
            cout << stk.size() << "\n";
        }
        else if (command == "empty") {
            if (!stk.empty()) cout << "0\n";
            else cout << "1\n";
        }
        else if (command == "top") {
            if (!stk.empty()) cout << stk.top() << "\n";
            else cout << "-1\n";
           
        }
    }
    return 0;
}
