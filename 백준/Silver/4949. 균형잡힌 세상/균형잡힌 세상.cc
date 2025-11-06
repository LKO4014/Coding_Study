#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	stack<bool> stk;
	vector<bool> answer;
	bool flag = false;
	string str;
	while (1) {
		getline(cin, str);
		if (str == ".") break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				stk.push(true);
			}
			else if (str[i] == ')') {
				if (!stk.empty() && stk.top()==true)
					stk.pop();
				else {
					flag = true;
					break;
				}
			}
			if (str[i] == '[') {
				stk.push(false);
			}
			else if (str[i] == ']') {
				if (!stk.empty()&&stk.top()==false)
					stk.pop();
				else {
					flag = true;
					break;
				}
			}
		}

		if (stk.size() ==0 && flag==false) {
			answer.push_back(true);
		}
		else {
			answer.push_back(false);
		}
		flag = false;
		stk = {};
	}

	for (int i = 0; i < answer.size(); i++) {
		if (answer[i] == true)
			cout << "yes";
		else
			cout << "no";
		cout << "\n";
	}
}
