#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int start = 1;
    int end = 2;
    int sum = 1;
    
    while(start <= n/2){
        while(sum < n && end < n){
            sum+=end;
            end++;
        }
        if(sum==n)
            answer++;
        sum-=start;
        start++;
    }
    
    
    return answer;
}