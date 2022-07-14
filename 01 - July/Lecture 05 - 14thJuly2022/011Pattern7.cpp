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

		// followed by 2i-1 stars
		j =  1;
		while(j <= 2*i - 1) {
			cout << "*";
			j++;
		}

		cout << endl;
		i++;
	}
	
	return 0;
}