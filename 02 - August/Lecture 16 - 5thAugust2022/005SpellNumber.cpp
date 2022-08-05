#include<iostream>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                       	 "eight", "nine"};

void f(int n) {

	// base case
	if(n == 0) {
		return;
	}

	// recursive case

	// 1. ask your friend to spell the number n/10
	f(n/10);

	// int digit = n%10; 
	// string spelling = spellingMap[digit];
	// cout << spelling << " ";

	cout << spellingMap[n%10] << " ";

}
 
int main() {

	int n = 456;

	f(n);

	return 0;
}