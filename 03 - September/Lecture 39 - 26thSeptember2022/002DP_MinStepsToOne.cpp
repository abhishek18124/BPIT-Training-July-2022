/*

Given a number n, count the minimum steps to reduce n to 1 
such that at each step you may

	reduce n to n/2 if n is divisible by 2
	or reduce n to n/3 if n is divisible by 3
	or reduce n to n-1 by decrementing n by 1

Example :
	Input : n = 10
	Output : 3

	Input : 6
	Output : 2

*/

#include<iostream>
#include<vector>

using namespace std;

int minSteps(int n) {

	// base case
	if(n == 1) {
		// count min. steps required to reduce 1 to 1
		return 0;
	}

	// recursive case 

	// count min. steps requried to reduce n to 1

	// 1. reduce n to n-1
	int x = minSteps(n-1);

	// 2. reduce n to n/2
	int y = INT_MAX;
	if(n%2 == 0) {
		y = minSteps(n/2);
	}

	// 3. reduce n to n/3
	int z = INT_MAX;
	if(n%3 == 0) {
		z = minSteps(n/3);
	}

	return 1 + min({x, y, z}); // 1 + min(x, min(y, z));

}

int minStepsTopDown(int n, vector<int>& dp) {

	// lookup
	if(dp[n] != -1) {
		// you've already compute the min. steps required to reduce n to 1
		return dp[n];
	}

	// base case
	if(n == 1) {
		// count min. steps required to reduce 1 to 1
		return dp[n] = 0;
	}

	// recursive case 

	// count min. steps requried to reduce n to 1

	// 1. reduce n to n-1
	int x = minStepsTopDown(n-1, dp);

	// 2. reduce n to n/2
	int y = INT_MAX;
	if(n%2 == 0) {
		y = minStepsTopDown(n/2, dp);
	}

	// 3. reduce n to n/3
	int z = INT_MAX;
	if(n%3 == 0) {
		z = minStepsTopDown(n/3, dp);
	}

	return dp[n] = 1 + min({x, y, z}); // 1 + min(x, min(y, z));

}

int minStepsBottomUp(int n) {

	vector<int> dp(n+1); // 0th index is unused

	dp[1] = 0; // dp[1] -> f(1) : min. steps. required to reduce 1 to 1
	for(int i=2; i<=n; i++) {
		// dp[i] = f(i) -> min. steps required to reduce i to 1

		// 1. reduce i to i-1
		int x = dp[i-1];

		// 2. reduce i to i/2
		int y = INT_MAX;
		if(i%2 == 0) {
			y = dp[i/2];
		}

		// 3. reduce i to i/3
		int z = INT_MAX;
		if(i%3 == 0) {
			z = dp[i/3];
		}

		dp[i] = 1 + min({x, y, z});
	}

	return dp[n]; // dp[n] = f(n) -> min. steps required to reduce n to 1 : original problem

}

int main() {

	int n = 10;

	cout << minSteps(n) << endl;

	vector<int> dp(n+1, -1);

	cout << minStepsTopDown(n, dp) << endl;

	cout << minStepsBottomUp(n) << endl;
		
	return 0;
}