#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int stair;
    cin >> stair;
    int score;
    vector<int> *vec = new vector<int>[stair];
    for (int i = 0; i < stair; i++) {
        cin >> score;
        if (i == 0) {
            vec[i].push_back(score);
        }
        else if (i == 1) {
            vec[i] = vec[i - 1];
            vec[i].push_back(score);
        }
        else {

        }
    }
}
