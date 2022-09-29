/*

Given n wines in a row, with integers denoting the cost of each wine respectively. Each year 
you can sell the first or the last wine in the row. However, the price of wines increases 
over time. 

Let the initial prices of the wines be [p_1, p_2, ... , p_n]. In the yth year, the profit 
from the kth wine will be y*p_k. 

Find the maximum profit from all the wines.

Example :
	Input : prices[] = {2, 3, 5, 1, 4}
	Ouptut: 50

*/

#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> prices, int i, int j, int y) {

	// base 
	if(i == j) {
		// you're left with a single bottle of wine i.e you are in the nth year
		return prices[i]*y; // y = n
	}

	// recursive case

	// 1. sell the ith bottle of wine
	int X = maxProfit(prices, i+1, j, y+1);

	// 2. sell the jth bottle of wine
	int Y = maxProfit(prices, i, j-1, y+1);

	return max(prices[i]*y + X, 
		       prices[j]*y + Y);

}

int maxProfitBottomUp(vector<int> prices, int n) {

	vector<vector<int>> dp(n, vector<int>(n));

	for(int i=0; i<n; i++) {
		dp[i][i] = prices[i]*n; // i == j
	}

	for(int i=n-2; i>=0; i--) {
		for(int j=i+1; j<n; j++) {
			// dp[i][j] = f(i, j)
			int y = n-(j-i);
			dp[i][j] = max(prices[i]*y + dp[i+1][j],
			               prices[j]*y + dp[i][j-1]);
		}
	}

	return dp[0][n-1]; // f(0, n-1) i.e. original problem


}

int main() {

	vector<int> prices = {2, 3, 5, 1, 4};
	int n = prices.size();
	cout << maxProfit(prices, 0, n-1, 1) << endl;
	cout << maxProfitBottomUp(prices, n) << endl;
	
	return 0;
}