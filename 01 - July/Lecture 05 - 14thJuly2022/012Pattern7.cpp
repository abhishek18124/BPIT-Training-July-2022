#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
		
	while(i <= n) {

		// in the ith row, print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << " ";
			j++;
		}

		// followed by i stars
		j =  1;
		while(j <= i) {
			cout << "*";
			j++;
		}

		// followed by (i-1) more stars
		j = 1;
		while(j <= i-1) {
			cout << "*";
			j++;
		}

		cout << endl;
		i++;
	}
	
	return 0;
}