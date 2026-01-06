#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    for(int i=1; i<triangle.size(); i++){
        for(int j=0; j<triangle[i].size(); j++){
            if(j==0){
                triangle[i][j]+=triangle[i-1][j];
            }
            else if(j==triangle[i].size()-1){
                triangle[i][j]+=triangle[i-1][j-1];
            }
            else{
                int F;
                if(triangle[i-1][j]>triangle[i-1][j-1])
                    F=triangle[i-1][j];
                else
                    F=triangle[i-1][j-1];
                triangle[i][j]+=F;
                
            }
            if(triangle[i][j]>answer)
                answer = triangle[i][j];
        }
    }
    return answer;
}