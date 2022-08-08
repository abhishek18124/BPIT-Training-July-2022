/*

Given a string str, design a recursive algorithm to move all the occurrence of letter x 
to the end of the string str.

Example 
	Input : str = "axbcxdxfx"
	Output: str = "abcdfxxxx"

	Input : str = "xabcxdxfx"
	Output: str = "abcdfxxxx"

*/

#include<iostream>

using namespace std;

string move(string str) {

	// base case
	if(str == "") { // or str.empty() or str.size() == 0
		return str;
	}

	// recursive case

	// 1. extract the subString that starts from the 1st index
	string subString = str.substr(1);

	// 2. ask your friend to move all the 'x' characters in the subString to the end
	string stringFromMyFriend = move(subString);

	// char ch = str[0];

	string ch = string(1, str[0]);

	if(ch == "x") {
		return stringFromMyFriend + ch;
	}

	return ch + stringFromMyFriend;

}

int main() {

	string str = "dxaxbxc";

	cout << move(str) << endl;

	return 0;
}