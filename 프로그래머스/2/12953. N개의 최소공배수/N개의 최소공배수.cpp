#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    
    // arr 배열의 최대공약수를 구한다
    int g=arr[0];
    for(int i=1; i<arr.size(); i++){
        g = g*arr[i]/__gcd(g, arr[i]);
    }
    answer =g;
    return answer;
}