#include<string>
#include <iostream>
#include <vector>
using namespace std;

bool solution(string s)
{
    vector<char> stack;
    bool answer;
    for(int i=0; i<s.size(); i++){
        printf("%c",s[i]);
        if(s[i]=='('){
            stack.push_back('(');
        }
        if(s[i]==')'){
            if(stack.size()==0){
                answer = false;
                return answer;
            }else{
                stack.pop_back();
            }
        }
    }
    if(stack.size()==0){
        answer = true;
    }else{
        answer=false;
    }
    
    return answer;
}