#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case
	if(n == 0) { // or str == ""
		// transform empty string into an integer -> and the integer value corr. to an empty string is zero
		return 0;
	}

	// recursive case

	// 1. extract the subString that starts at the 0th index and length of n-1
	string subString = str.substr(0, n-1);

	// 2. ask your friend to transform the subString into an integer
	int integerFromMyFriend = stringToInteger(subString, n-1);

	return integerFromMyFriend*10 + (str[n-1]-'0');

}

int main() {

	string str = "123";
	int n = str.size();
		
	int x = stringToInteger(str, n);

	cout << x+1 << endl;

	return 0;
}