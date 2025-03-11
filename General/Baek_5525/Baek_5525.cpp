// Baek_5525.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    int m;
    string s;
    cin >> n >> m;
    cin >> s;

    cout << s;

    string compare = "IOI";
    for (int i = 1; i < n; i++) {
        compare += "OI";
    }
    cout << "\n";
    cout <<"COMPARE : " << compare;
    for (int i = 0; i < s.size()-compare.size(); i++) {
        
    }
}

