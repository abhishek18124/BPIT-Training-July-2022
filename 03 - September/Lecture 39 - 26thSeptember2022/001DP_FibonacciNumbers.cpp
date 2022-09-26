/*

given a number n, find the nth fibonacci no.

Example :
	Input : n = 7
	Output : 13

*/

#include<iostream>
#include<vector>

using namespace std;

int fibo(int n) {

	// base case
	if(n == 0 || n == 1) {
		return n;
	}

	// recursive case
	return fibo(n-1) + fibo(n-2);
}

int fiboTopDown(int n, vector<int>& dp) {

	// lookup
	if(dp[n] != -1) {
		// you've previously computed the value of the nth fibo. no.
		return dp[n];
	}

	// base case
	if(n == 0 || n == 1) {
		return dp[n] = n;
	}

	// recursive case
	return dp[n] = fiboTopDown(n-1, dp) + fiboTopDown(n-2, dp);

}

int fiboBottomUp(int n) {

	vector<int> dp(n+1);

	dp[0] = 0; // dp[0] -> f(0) -> 0th fibonacci no.
	dp[1] = 1; // dp[0] -> f(1) -> 1st fibonacci no.

	for(int i=2; i<=n; i++) {
		// dp[i] = f(i) -> ith fibonacci no.
		dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[n];

}

int fiboSpaceOptimised(int n) {

	if(n == 0  || n == 1) {
		return n;
	}

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.

	for(int i=2; i<=n; i++) {
		int c = a+b;
		a = b;
		b = c;
	}

	return b;

}

int main() {

	int n = 7;

	cout << fibo(n) << endl;

	vector<int> dp(n+1, -1);

	cout << fiboTopDown(n, dp) << endl;

	cout << fiboBottomUp(n) << endl;

	cout << fiboSpaceOptimised(n) << endl;

	return 0;
}