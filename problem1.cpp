#include <iostream>
#include "problem1.h"

#define false 0;
#define true 1;

int main() {

	for (int i = 0; i < threes; i++) {
		mulThree[i] = ((i+1) * 3);
		std::cout << "Multiple of three: " << mulThree[i] << std::endl;
	}

	for (int i = 0; i < fives; i++) {
		mulFive[i] = ((i+1) * 5);
		std::cout << "Multiple of five: " << mulFive[i] << std::endl;
	}

	for (int j = 0; j < fives; j++) {
		std::cout << "Adding: " << mulFive[j] << std::endl;
		sum += mulFive[j];
	}

	for (int i = 0; i < threes; i++) {

		int repeatedNumber = 0;
		int temp_mulThree = mulThree[i];
		
		for (int j = 0; j < fives; j++) {
			int temp_mulFive = mulFive[j]; //NEED TO WATCH FOR 'i' YOU IDIOT!!
			
			if(temp_mulFive == temp_mulThree) {
				std::cout << "repeatedNumber" << std::endl;
				repeatedNumber = 1;
			}

		}
		
		if (!repeatedNumber)
		{
			std::cout << "Adding: " << temp_mulThree << std::endl;
			sum += temp_mulThree;
		}
	}

	std::cout << "Sum: " << sum << std::endl;

	return 0;
}