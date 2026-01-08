#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    
    for(int i=0; i<scoville.size(); i++){
        q.push(scoville[i]);
    }
    
    while(q.size()>1 && q.top()<K){
        answer++;
        int pure1 = q.top();
        q.pop();
        int pure2 = q.top();
        q.pop();
        int newer = pure1 + pure2 * 2;
        q.push(newer);
    }
    if(q.size()==1 && q.top()<K)
        answer = -1;
    
    return answer;
}