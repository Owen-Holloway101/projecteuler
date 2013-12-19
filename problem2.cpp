#include <iostream>

int main() {

	int currentFib = 1;

	int currentFibNo = 1;

	int fib[1000000];
	fib[0] = 1;

	while (currentFib < 4000000) {

		currentFibNo++;
		currentFib = fib[currentFibNo - 1] + fib[currentFibNo - 2];
		fib[currentFibNo] = currentFib;
		std::cout << "currentFib: " << currentFib << std::endl;
	}

	std::cout << currentFibNo << std::endl;
	
	int fibSum = 0;

	for (int i = 3; i < currentFibNo; ++i)
	{
		if (fib[i]%2 == 0) {
			fibSum = fibSum + fib[i];
			std::cout << "Fib added: " << fib[i] << std::endl;
		} else {
			std::cout << "NOT EVEN: " <<  fib[i] << std::endl;
 		}
	}

	std::cout << "Total: " << fibSum << std::endl;
	
	
	return 0;
}