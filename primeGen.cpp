int prime[100000];

int primeGen(int primesBelow) {
	//Prime generation ######################################################

	int testNo;
	int currentPrime;

	prime[0] = 2; //2 is the first prime as all other primes will come after

	while (testNo < primesBelow) {

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
}