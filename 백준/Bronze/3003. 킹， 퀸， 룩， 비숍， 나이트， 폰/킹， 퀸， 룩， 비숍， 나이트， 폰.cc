#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int king, queen, rook, bsh, kni, pho;
	cin >> king >> queen >> rook >> bsh >> kni >> pho;
	cout << 1 - king <<" "<< 1 - queen <<" "<< 2 - rook <<" "<< 2 - bsh <<" "<< 2 - kni <<" "<< 8 - pho;
}
