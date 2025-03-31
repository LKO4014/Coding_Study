
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> answer;
    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int n;
        int tmp;
        cin >> n;
        double sum = 0;
        vector<double> score;
        for (int j = 0; j < n; j++) {
            cin >> tmp;
            score.push_back(tmp);
            sum += tmp;
        }
        double avg = sum / n;
        double per = 0;
        for (int j = 0;j < n; j++) {
            if (avg < score[j]) {
                per++;
            }
        }
        answer.push_back(per / n * 100);
    }
    for (int i = 0; i < answer.size(); i++) {
        printf("%.3f", answer[i]);
        cout << "%\n";
    }
}
