#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    if(n<10){
        answer = n;
    }
    else{
        answer = n%10 + solution((n-(n%10))/10);
    }
    return answer;
}