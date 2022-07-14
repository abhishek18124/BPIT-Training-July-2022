#include<iostream>

using namespace std;

int main() {

	int n = 10;

	for(int i=1; i<=n; i++) {
		cout << i << " ";
	}

	cout << i << " " << endl; // error - i is visible only inside for-loop

	cout << endl;

	return 0;
}