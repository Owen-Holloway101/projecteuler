#include <iostream>

const int primes = 10000;

const unsigned long int number = 600851475143; //the number we are testing against
unsigned long int finalNumber = number;

int prime[primes];
int factor[100];

int currentPrime = 1;
int testNo = 3; //As 2 is the first prime and 2%2 = 0 we start from 3

int main() {
 
	//Prime generation ######################################################

	prime[0] = 2; //2 is the first prime as all other primes will come after

	while (currentPrime < primes) {

		bool isPrime = true;
		for (int i = 0; i < currentPrime; ++i) {
			if ((float)(testNo %prime[i]) == float(0)) {
				isPrime = false;
			}
		}

		if (isPrime) {
			prime[currentPrime] = testNo;
			currentPrime++;
			//std::cout << "Primes: " << currentPrime << std::endl;
			std::cout << "Prime: " << testNo << std::endl;
		}

		testNo++;
	}

	//Prime generation ######################################################

	for (int i = 0; i < primes; i++) {
		if (finalNumber % prime[i] == 0) {
			finalNumber = finalNumber/prime[i];
			std::cout << "prime factor: " << prime[i] << std::endl;
		}

	}

	return 0;
}

/*ALG:

gen primes (I am using a sieve method for this)

while finalNumber is greater than 2
	check if number is divisible by prime wholly:
		add prime to list of divisible primes
		finalPrime = finalNumber / prime
*/