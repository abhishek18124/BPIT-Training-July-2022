#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(string str) {
	int i = 0;
	int j= str.size()-1;
	while(i < j) {
		if(str[i] != str[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int countPalindromicPartitioning(string str, int n, int i, vector<string>& partition) {
	
	// base case
	
	if(i == n) {
		// count the number of palindromic partitioning of str[n...n-1] 
		for(string p : partition) {
			cout << p << " ";
		}
		cout << endl;
		return 1;
	}

	// recursive case
	
	// count the number of palindromic partitioning of str[i...n-1] 
	
	int count = 0;
	for(int j=i; j<n; j++) {
		string subString = str.substr(i, j-i+1);
		if(isPalindrome(subString)) {
			partition.push_back(subString);
			count += countPalindromicPartitioning(str, n, j+1, partition);
			partition.pop_back(); // back-tracking step
		}
	}

	return count;

}

int countPalindromicPartitioningBottomUp(string str, int n) {

	vector<int> dp(n+1);

	dp[n] = 1; // f(n)

	for(int i=n-1; i>=0; i--) {
		// dp[i] = f(i) : count the no. of pp of str[i...n-1]
		int count = 0;
		for(int j=i; j<n; j++) {
			string subStr = str.substr(i, j-i+1);
			if(isPalindrome(subStr)) {
				count += dp[j+1];
			}
		}
		dp[i] = count;
	}

	return dp[0]; // dp[0] = f(0) : original problem

}

int main() {

	string str = "abaca";
	int n = str.size();

	vector<string> partition;

	cout << countPalindromicPartitioning(str, n, 0, partition) << endl;

	// cout << countPalindromicPartitioningBottomUp(str, n) << endl;
	
	return 0;
}