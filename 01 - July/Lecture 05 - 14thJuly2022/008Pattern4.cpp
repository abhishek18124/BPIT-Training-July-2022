#include<iostream>

using namespace std;

int main() {

	int n = 4;

	int i = 1;
		
	while(i <= n) {

		// print 'i' nos. for the ith row

		int no;
		if(i%2 == 0) {
			// you are in an even row
			no = 0;
		} else {
			// you are in an odd row
			no = 1;
		}

		int j = 1;
		while(j <= i) {
			cout << no << " ";
			no = 1-no;
			j++;
		}

		cout << endl;
		i++;
	}
	
	return 0;
}