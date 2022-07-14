#include<iostream>

using namespace std;

int main() {

	int n = 4;

	int i = 1;
	int no = 1;
		
	while(i <= n) {

		// print 'i' nos. for the ith row

		int j = 1;
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