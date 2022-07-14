#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
		
	while(i <= n) {

		// in the ith row, print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << "  ";
			j++;
		}

		// followed by i nos in the inc. order starting with i
		int no = i;
		j = 1;
		while(j <= i) {
			cout << no << " ";
			no++;
			j++;
		}

		cout << endl;
		i++;
	}
	
	return 0;
}