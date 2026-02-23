#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<int> stk;
    
    int i=0;
    while(i<s.length()){
        if(s[i]=='('){
            stk.push(1);
        }
        else{
            if(stk.size()==0){
                answer = false;
            }
            else{
                stk.pop();
            }
            
        }
        i++;
    }
    
    if(stk.size()!=0 || answer == false){
        answer = false;
    }
    
    return answer;
}