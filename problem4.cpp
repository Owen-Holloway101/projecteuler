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

int palindrome[1000];
int currentPalindromes = 0;

int main() {

	for (int i = 900; i < 999; ++i) {
		for (int j = 900; j < 999; ++j) {
			int testNo = i * j;
			int testNoReverse = reverseInt(testNo);
			if (testNo == testNoReverse) {

				palindrome[currentPalindromes] = testNo;
				currentPalindromes++;
				std::cout << "palindrome: " << testNo << std::endl;
				
			}
		}
	}

	return 0;
}