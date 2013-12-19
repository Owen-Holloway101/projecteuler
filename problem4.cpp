#include <iostream>
#include <string>
#include <sstream>
#include <iostream>

std::string intToString(int input) { 
	//Converts intgers to strings using <sstream>
	std::ostringstream convert;
	convert << input;
	return convert.str();
}

int stringToInt(std::string input) {
	std::istringstream buffer(input);
	int value;
	buffer >> value;
	return value;
}

std::string reverse (std::string s) { 
	std::string result;
	for (int i = 0; i < (int)s.length(); i++) {
		result = s[ i ] + result ;
	}
	return result; 
}

int reverseInt(int input) {
	std::string inputString = intToString(input);
	std::string inputStringReverse = reverse(inputString);
	int result = stringToInt(inputStringReverse);
	return result;
}

int main() {

	bool palindrome = false;
	int high1 = 999;
	int high2 = 999;

	while (!palindrome) {

		int testInt = high1 * high2;
		int testIntReverse = reverseInt(testInt);
		if (testInt == testIntReverse) {
			std::cout << testInt << std::endl;
			std::cout << testIntReverse << std::endl;
			palindrome = true;
		}
		high2--;
		
		testInt = high1 * high2;
		testIntReverse = reverseInt(testInt);

		if (testInt == testIntReverse) {
			std::cout << testInt << std::endl;
			std::cout << testIntReverse << std::endl;
			palindrome = true;
		}
		high1--;

	}

	return 0;
}