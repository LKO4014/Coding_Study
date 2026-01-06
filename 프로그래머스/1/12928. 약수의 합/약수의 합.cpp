#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int div = 1;
    while(div<n){
        if(n%div==0){
            answer += div;
        }
        div++;
    }
    answer+=n;
    return answer;
}