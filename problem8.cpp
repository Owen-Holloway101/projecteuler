#include <iostream>
#include <fstream>
#include <string>

#include "strintconvert.cpp"

using namespace std;

int testNo[1000];

int main() {

	string input;
	ifstream myfile ("problem8.in");
	
	if (myfile.is_open()) {

		getline (myfile,input);
		myfile.close();
	
	} else  {
		cout << "Unable to open file" << endl;
	} 

	for (int i = 0; i < 1000; ++i) {
		testNo[i] = input.at(i) - '0';
		//cout << testNo[i] << ":";
	}
	//cout << endl;

	int highestNo = 0;
	int highestNoStartIndex = 0;

	for (int i = 0; i < 995; i++) {
		
		long int testProd = (testNo[i] * testNo[i + 1] * testNo[i + 2] * testNo[i + 3] * testNo[i + 4]);

		if (testProd > highestNo) {
			highestNo = testProd;
			highestNoStartIndex = i;
		}
	}

	cout << highestNo << endl;
	cout << testNo[highestNoStartIndex] << ":" << testNo[highestNoStartIndex + 1] << ":" << testNo[highestNoStartIndex + 2] << ":" << testNo[highestNoStartIndex + 3] << ":" << testNo[highestNoStartIndex + 4] << endl;

	return 0;

}