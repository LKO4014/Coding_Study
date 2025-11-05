#include <iostream>
#include <vector>

using namespace std;

vector<int> findGrandma(vector<int>& family, int num);
int findSameParent(vector<int>& myFamily, vector<int>& yourFamily);
void forDebug(vector<int>& vec);

int main()
{
    // 입력부
    int people, fir, sec, relations;
    cin >> people >> fir >> sec >> relations;
    vector<int> family(people + 1);
    for (int i = 0; i < relations; i++) {
        int parent, child;
        cin >> parent >> child;
        family[child] = parent;
    }

    // 부모가 0이면 child에 해당하는 숫자는 최종 부모다
    //for (int i = 1; i < people + 1; i++) {
    //    cout << i << "'s parent is " << family[i] << "\n";
    //}

    //유사 DFS 구현 시작

    // fir의 최종 부모까지의 vector를 구함
    vector<int> firFamily = findGrandma(family, fir);
    // sec의 최종 부모까지의 vector를 구함
    vector<int> secFamily = findGrandma(family, sec);

    // 두 vector에서 최초로 같은 부모가 나오는 경우를 비교하여 도출
    int ourParentIndex = findSameParent(firFamily, secFamily);
    // 최초로 같은 부모에서 fir과의 촌수, sec과의 촌수를 구한 뒤 더하여 리턴

    int answer;
    if (ourParentIndex != -1) {
        answer = firFamily.size() + secFamily.size();
    }
    else {
        answer = -1;
    }

    cout <<answer;
}

//최종 직계가족 족보를 내놓음 // 최종 부모가 자기 자신인 경우도..
vector<int> findGrandma(vector<int>& family,int num) {
    vector<int> answer;
    //초기 설정
    //왜 초기 설정에서 1을 push_back하지 않는 것이지?
    int parent, child;
    child = num;
    parent = family[child];
    answer.push_back(child);

    while (1) {
        if (parent == 0) {
            break;
        }
        answer.push_back(parent);
        child = parent;
        parent = family[child];
    }

    return answer;
}

//최초로 같은 직계 가족의 인덱스를 리턴함 
int findSameParent(vector<int>& myFamily, vector<int>& yourFamily) {
    //최종 부모가 같지 않으면 다른 놈의 색기
    if (myFamily[myFamily.size()-1] != yourFamily[yourFamily.size()-1])
        return -1;
    // index 참조 에러 방지용
    int endIndex;
    if (myFamily.size() < yourFamily.size())
        endIndex = myFamily.size();
    else
        endIndex = yourFamily.size();
    // 부모가 다른 순간을 잡아서, 최초 직계 가족이 되는 이전의 부모가 리턴
    // 최종 부모는 같으므로 index를 0이 아닌 1부터 시작하도록 
    int prev=1;
    for (int index = endIndex-1; index >= 0; index--) {
      /*  if (myFamily[index] != yourFamily[index])
            return index+1;*/
        
        if (myFamily[myFamily.size() - 1] == yourFamily[yourFamily.size() - 1]) {
            prev = myFamily[myFamily.size() - 1];
            myFamily.pop_back();
            yourFamily.pop_back();
        }
        else {
            
        }
    }
    // 아니면 가족 아님
    return prev;
}

void forDebug(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}