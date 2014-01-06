#include <iostream>
#include <string>
#include <sstream>

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