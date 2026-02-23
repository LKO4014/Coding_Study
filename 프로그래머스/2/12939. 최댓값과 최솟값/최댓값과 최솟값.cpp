#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i=0;
    int min = 2147483647;
    int max = -min;
    int n;
    string tmp="";
    // 1. 정수를 추출하는 함수를 만든다
    
    // 문자열의 끝에 도달하지 않았다면
    while(i<s.length()){
        // 공백이 아니라면
        if(s[i]!=' '){
            // 그것은 하나의 숫자라고 할 수 있다.
            tmp+=s[i];
        }
        else{
            n= stoi(tmp);
            if(min > n)
                min = n;
            if(max < n)
                max = n;
            tmp="";
        }
        i++;
        
    }
    n= stoi(tmp);
    if(min > n)
        min = n;
    if(max < n)
        max = n;
    
    answer = to_string(min)+" "+to_string(max);
    
    return answer;
}