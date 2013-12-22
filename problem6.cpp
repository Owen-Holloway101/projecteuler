#include <iostream>

using namespace std;

const int finalNo = 100;

long int sumOfSquares = 0;
long int squareOfSums = 0;
int sums = 0;

int main() {

	for (int i = 0; i < finalNo + 1; ++i) {
		sums += i;
		sumOfSquares += (i*i);
		cout << "Current: " << i << "^2" << endl;
	}

	cout << "sums: " << sums << endl;
	squareOfSums = sums*sums;

	cout << "sumOfSquares: " << sumOfSquares << endl;
	cout << "squareOfSums: " << squareOfSums << endl;
	cout << "diff: " << squareOfSums-sumOfSquares << endl;
}