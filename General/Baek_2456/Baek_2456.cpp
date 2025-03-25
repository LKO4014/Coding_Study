
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	double ah = 0, bh = 0, ch = 0;
	int an = 0, bn = 0, cn = 0;
	int one, two, thr;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> one >> two >> thr;
		a += one;
		b += two;
		c += thr;
		if (one != 1) {
			ah += one;
			an++;
		}if (two != 1) {
			bh += two;
			bn++;
		}if (thr != 1) {
			ch += thr;
			cn++;
		}
	}

	ah = ah / an;
	bh = bh / bn;
	ch = ch / cn;

	int max;
	if (a == b && a == c) {
		if (ah < bh) {
			if (bh < ch) {
				max = c;
				cout << "3 ";
			}
			else if(bh>ch){
				max = b;
				cout << "2 ";
			}
			else {
				max = a;
				cout << "0 ";
			}
		}
		else{
			if (ah < ch) {
				max = c;
				cout << "3 ";
			}
			else if (ah > ch) {
				max = a;
				cout << "1 ";
			}
			else {
				cout << "0 ";
				max = a;
			}
		}
		
	}
	else {
		if (a > b) {
			if (a > c) {
				max = a;
				cout << "1 ";
			}
			else if (a == c) {
				if (ah < ch) {
					max = c;
					cout << "3 ";
				}
				else {
					max = a;
					cout << "1 ";
				}
			}
			else {
				max = c;
				cout << "3 ";
			}
		}
		else { //a<b
			if (b > c) {
				max = b;
				cout << "2 ";
			}
			else if (b == c) {
				if (bh < ch) {
					max = c;
					cout << "3 ";
				}
				else {
					max = b;
					cout << "2 ";
				}
			}
			else {
				max = c;
				cout << "3 ";
			}
		}
	}

	cout<< max;
	
}
