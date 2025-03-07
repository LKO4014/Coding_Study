#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <list>
#include <cstdlib>
#include<utility> 
using namespace std;

/*
*  현재 문제는 가장 작은 문제부터 쪼개어 해결해야하는 DP 알고리즘임
*   /3, /2, -1 중 현재 값에서 할 수 있는 연산 중 가장 작은 값을 도출하는 경우를 추적
*/

vector<int> opp;

int main() {

	long input;
	cin >> input;

	for (long i = 1; i <= input; i++) {
		// 1, 2, 3은 초기값을 따로 설정
		if (i == 1 || i == 2 || i == 3) {
			if (i == 1)
				opp.push_back(0);
			else if (i == 2)
				opp.push_back(1);
			else if (i == 3)
				opp.push_back(1);
		}
		// 4 이상
		else {

			if (i % 3 == 0) {
				// i /3에 해당하는 연산의 수를 opp[i/3-1] 이라고 부르겠음
				// opp[ i /3-1] 의 값을 thr에 저장
				// i /3 에서 -1 을 하는 이유는 인덱스가 0부터 시작하기 때문임
				int thr = opp[i / 3 - 1] + 1;
				// opp[ i -1 -1 ] 
				int min = opp[i - 2] + 1;
				if (i % 2 == 0) {
					// 6의 경우 3과 2로 동시에 나누어질 수 있으므로
					// opp[ i /2 -1] 의 경우도 구해줌
					int two = opp[i / 2 - 1] + 1;
					// 위에서 구했던 값 중 가장 적은 값을 찾아서 opp에 올림
					if (thr < min)
						if (thr < two)
							opp.push_back(thr);
						else opp.push_back(two);
					else
						if (min < two)
							opp.push_back(min);
						else
							opp.push_back(two);
				}
				else {
					if (thr < min)
						opp.push_back(thr);
					else
						opp.push_back(min);
				}

			}
			// /3으로는 나뉘지 않지만 /2로는 나뉘는 경우
			else if (i % 2 == 0) {
				int two = opp[i / 2 - 1] + 1;
				int min = opp[i - 2] + 1;
				if (two > min)
					opp.push_back(min);
				else
					opp.push_back(two);
			}
			// 나누어지지 않는 경우
			else {
				opp.push_back(opp[i - 2] + 1);
			}
		}
	}
	/*  opp에 저장된 값 확인 시 사용
	for (int i = 1; i <= opp.size(); i++) {
		cout << opp[i - 1] << " ";
		if (i % 5 == 0)
			cout << "\n";
	}
	*/
	cout << opp[input - 1];

	return 0;
}