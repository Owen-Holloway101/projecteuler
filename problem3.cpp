#include <iostream>

const int primes = 100;
const int number = 600851475143; //the number we are testing against
int finalNumber = number;
int prime[primes];

prime[0] = 2; //2 is the first prime as all other primes will come after

int main() {

	int currentPrimes = 1;
	int testNo = 3; //As 2 is the first prime and 2%2 = 0 we start from 3
 
	while (currentPrimes < primes) {

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