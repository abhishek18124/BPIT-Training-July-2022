
#include<iostream>

using namespace std;

int main() {

	char str[100] = "codingblocks";
	int n = strlen(str);
	int k = 3;

	// 1. shift all the characters 'k' steps to the right
	for(int i=n; i>=0; i--) {
		str[i+k] = str[i];
	}

	cout << str << endl;

	// 2. move the last k characters to the front
	int i = 0;
	int j = n;
	while(k--) {
		str[i] = str[j];
		i++;
		j++;
	}

	str[n] = '\0';

	cout << str << endl;
	
	return 0;
}
