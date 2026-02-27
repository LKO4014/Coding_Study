#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    int past = arr[0];
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i]!=past){
            answer.push_back(arr[i]);
            past = arr[i];
        }
    }
    return answer;
}