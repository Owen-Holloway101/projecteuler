long int prime[100000];

void primeGen(long int primesBelow) {
	//Prime generation ######################################################

	long int testNo = 3;
	long int currentPrime = 1;

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
			//std::cout << "Prime: " << testNo << std::endl;
		}

		testNo++;
	}

	std::cout << "Primes below: " << primesBelow << " found" << std::endl;

	//Prime generation ######################################################
}