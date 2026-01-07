#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int start=0;
    int end =1;
    int sum =sequence[start];
    int n= sequence.size();
    int ans_start=-1;
    int ans_end=n;
    
    while(start < n){
        while(end <n && sum <k){
            sum+=sequence[end];
            end++;
        }
        if(sum==k){
            if(end-1-start < ans_end-ans_start){
                ans_end = end-1;
                ans_start = start;
            }
            else if (end-1-start == ans_end-ans_start){
                if(ans_start > start){
                    ans_end = end-1;
                    ans_start = start;
                }
            }
        }
        
        sum -= sequence[start];
        start++;
    }
    
    answer.push_back(ans_start);
    answer.push_back(ans_end);
    
    return answer;
}