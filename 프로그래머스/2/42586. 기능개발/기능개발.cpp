#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    // 각 progresses가 끝나는 일자를 담은 vector<int>를 새로 만든다.
    queue<int> day;
    
    for(int i=0; i<progresses.size(); i++)
    {
        int ans = 100-progresses[i];
        if(ans%speeds[i]!=0){
            ans = ans/speeds[i]+1;
        }
        else{
            ans = ans/speeds[i];
        }
        day.push(ans);
    }
    
    int big = day.front();
    int task=0;
    while (day.size() > 0) {
        while (big >= day.front()) {
            task++;
            day.pop();
            if (day.size() == 0)
                break;
        }
        if (day.size() != 0) {
            big = day.front();
        } 
        answer.push_back(task);
        task = 0;
}

    
    return answer;
}