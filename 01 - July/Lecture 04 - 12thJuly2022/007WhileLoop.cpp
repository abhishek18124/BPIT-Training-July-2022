#include<iostream>

using namespace std;

int main() {

	int n;

	cout << "Enter a positive number n : ";
	cin >> n;

	int i = 1; // init
	while(i <= n) {
		cout << i << " "; 
		i = i + 1; // update rule
	}
		
	cout << endl << "You are outside the body of the while-loop" << endl;

	return 0;
}