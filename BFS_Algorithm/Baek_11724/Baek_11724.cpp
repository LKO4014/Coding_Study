#include <iostream>
#include<vector>

using namespace std;

int returnIndex(vector<int> vec, int tmp) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == tmp)
            return i;
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int tmp1;
    int tmp2;

    vector<int>Linked;
    vector<pair<int,int>> input;
    int count = 0;
    for (int i = 0; i < m; i++) {
        cin >> tmp1 >> tmp2;
        input.push_back(make_pair(tmp1, tmp2));
    }
    for (int i = 0; i < m; i++) {


        int indexTmp1 = returnIndex(Linked, tmp1);
        int indexTmp2 = returnIndex(Linked, tmp2);

        if (indexTmp1 == -1 && indexTmp2 != -1) {
            Linked.push_back(tmp1);
        }
        else if (indexTmp1 != -1 && indexTmp2 == -1) {
            Linked.push_back(tmp2);
        }
        else if (indexTmp1 ==-1 && indexTmp2 ==-1){
            count++;
            Linked.push_back(tmp1);
            Linked.push_back(tmp2);
        }
        cout << "count : " << count << "\n";
    }
    cout << count;
}