#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    queue<string> one;
    queue<string> two;
    
    for(int i=0; i<cards1.size(); i++){
        one.push(cards1[i]);
    }
    for(int j=0; j<cards2.size(); j++){
        two.push(cards2[j]);
    }
    
    for(int i=0; i<goal.size(); i++){
        if(goal[i]==one.front()){
            one.pop();
        }
        else if(goal[i]==two.front()){
            two.pop();
        }
        else{
            answer="No";
            break;
        }
    }
    
    return answer;
}