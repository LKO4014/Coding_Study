#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int x1, y1, x2, y2;
    
    x1=wallpaper.size();
    x2=-1;
    y1=wallpaper[0].size();
    y2=-1;
    
    for(int x=0; x<wallpaper.size(); x++){
        for(int y=0; y<wallpaper[x].size(); y++){
            if(wallpaper[x][y]=='#'){
                if(x<x1){
                    x1=x;
                }
                if(y<y1){
                    y1=y;
                }
                if(x>x2){
                    x2=x;
                }
                if(y>y2){
                    y2=y;
                }
            }
        }
    }
    
    //x2, y2를 구하는 수식에서 문제가 있는 것으로 보임
    answer.push_back(x1);
    answer.push_back(y1);
    answer.push_back(x2+1);
    answer.push_back(y2+1);
    
    return answer;
}