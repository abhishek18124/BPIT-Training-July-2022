// n <= 100

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

bool checkPalindrome(char* str) {

	// 1. using brute-force(naive) method

	// char copy[101];
	// strcpy(copy, str);
	// reverse(copy, copy+strlen(copy));
	// return strcmp(copy, str) == 0;

	// 2. using two-pointer approach

	int i = 0;
	int j = strlen(str)-1;

	while(i < j) {
		if(str[i] != str[j]) {
			return false;
		}
		i++;
		j--;
	}

	return true;

}

int main() {

	char str[] = "wow";

	checkPalindrome(str) ? cout << str << " is a palindrome" << endl :
	                       cout << str << " is not a palindrome" << endl;
		
	return 0;
}