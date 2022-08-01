#include<iostream>

using namespace std;

int main() {

	char str[] = "hello";
	
	for(int i=0; str[i] != '\0'; i++) {
		cout << str[i] << endl;
	}

	cout << endl;
	
	return 0;
}