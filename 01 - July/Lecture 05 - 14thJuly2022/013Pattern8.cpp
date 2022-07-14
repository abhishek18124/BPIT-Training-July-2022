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

		// followed by i nos. in the inc. order starting with i
		j =  1;
		int no = i;
		while(j <= i) {
			cout << no << " ";
			j++;
			no++;
		}

		// followed by (i-1) more nos. in  the dec. order starting with 2i-2
		j = 1;
		// no = 2*i - 2;
		no = no-2;
		while(j <= i-1) {
			cout << no << " ";
			j++;
			no--;
		}

		cout << endl;
		i++;
	}
	
	return 0;
}