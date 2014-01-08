#include <iostream>
#include <math.h>

using namespace std;

#define true 1
#define false 0

int isPerfectSquare(long int n)
{
  if (n < 0)
    return false;

  long int tst = (long int)(sqrt(n) + 0.5);
  return tst*tst == n;
}

int main() {

	long int a, b, c;

	for (a = 1;  a < 1000; ++a) {

		for (b = 0; b < 1000; ++b) {

			c = a*a + b*b;

			if (isPerfectSquare(c)) {

				cout << "perfSquare: " << a << "^2 + " << b << "^2" << " = " << c << endl;

				if ((a + b + sqrt(c)) == 1000) {
				  	cout << "FINAL FOUND!!" << a << ":" << b << ":" << sqrt(c) << endl;
				  	cout << "ANSWER: " << a * b * (sqrt(c)) << endl;
				  	return 0;
				}  
			}
		}
	}

	cout << "Final not found :C, also you should not be seeing this ...." << endl;

	return 0;
}