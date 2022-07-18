#include<iostream>

using namespace std;

int main() {

	int upperCount = 0;
	int lowerCount = 0;
	int specialCount = 0;
	int whitespacesCount = 0;
	int digitCount = 0;

	char ch;

	while(true) {

		ch = cin.get();
		if(ch == '$') {
			break;
		}

		if(ch >= 'A' and ch <= 'Z') {
			upperCount++;
		} else if(ch >= 'a' and ch <= 'z') {
			lowerCount++;
		} else if(ch >= '0' and ch <= '9') {
			digitCount++;
		} else if(ch == '\n' or ch == ' ' or ch == '\t') {
			whitespacesCount++;
		} else {
			specialCount++;
		}

	}

	cout << "upperCount = " << upperCount << endl;
	cout << "lowerCount = " << lowerCount << endl;
	cout << "digitCount = " << digitCount << endl;
	cout << "specialCount = " << specialCount << endl;
	cout << "whitespacesCount = " << whitespacesCount << endl;


	return 0;
}