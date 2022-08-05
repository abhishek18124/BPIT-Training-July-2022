#include<iostream>

using namespace std;

void f(int n, char src, char dst, char hlp) {

	// base case
	if(n == 0) {
		return;
	}

	// recursive case

	// 1. ask your friend to move (n-1) disks from src to hlp using the dst
	f(n-1, src, hlp, dst);

	// 2. move the largest disk from src to dst
	cout << "move from " << src << " to " << dst << endl;

	// 3. ask your friend to move (n-1) disks from hlp to dst using the src
	f(n-1, hlp, dst, src);
}

int main() {

	int n = 3;

	f(n, 'A', 'C', 'B');

	return 0;
}