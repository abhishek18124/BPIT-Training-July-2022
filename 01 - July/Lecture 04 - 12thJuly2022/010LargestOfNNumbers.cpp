#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int lsf = INT_MIN; // -2^31

	int x; 

	int i = 1;
	while(i <= n) {

		// 1. read an integer value from the user
		cin >> x;

		// 2. compare that value with lsf
		if(x > lsf) {
			lsf = x;
		}

		i = i+1;

	}

	cout << "Largest of n intgers : " << lsf << endl;
	
	return 0;
}