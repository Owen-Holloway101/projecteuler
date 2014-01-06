#include <iostream>

const int startNo = 20; 

int main() {

	//std::cout << "This is a test" << " well all I can say is this thing feels amazing! and types really fast!" << std::endl;
	
	bool isDivisable =  false;
	long int testNo = startNo;
	
	while(!isDivisable) {
		bool temp_isDivisable = true;

		for (int i = 1; i < 21; ++i) {
			if (!(testNo%i == 0)) {
				temp_isDivisable = false;
				std::cout << "test: " << testNo% i << std::endl;
			}
		}

		if (temp_isDivisable) {
			std::cout << "Divisable: " << testNo << std::endl;
			isDivisable = true;
		} else {
			std::cout << "Not Divisable: " << testNo << std::endl;
			testNo += 2520;
		}
	}
}