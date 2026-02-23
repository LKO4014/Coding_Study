#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    // 1. 단어 기준으로 쪼갠다
    // 2. 해당 단어의 첫 단어가 대문자인지 소문자인지 조사한다
        // 소문자라면 대문자로 바꾼다
    // 3. 다음 단어부터 모두 소문자로 바꾼다
    
    string tmp;
    
    while(index < s.length()){
        answer+=tolower(s[index]);
        index++;
    }
    index=0;
    while(index < answer.length()){
        if(index==0){
            answer[index] = toupper(answer[index]);
        }
        else if(answer[index]==' '){
            answer[index+1]=toupper(answer[index+1]);
        }
        index++;
    }
    
    return answer;
}