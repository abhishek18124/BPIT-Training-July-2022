/*

Given an array of non-negative integers, find the maximum subarray XOR.

Example: 
	Input : x[] = {25, 10, 2, 8, 5, 3} 
	Output: 

*/

#include<iostream>
#include<climits>

using namespace std;

class node {
public:
	
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	
	node() {
		this->left = NULL;
		this->right= NULL;
	}
};

class trie {
	
	node* root;

public:
	
	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for(int i=31; i>=0; i--) {
			int bit = (1<<i)&n;
			if(!bit) {
				// ith bit of n is 0, check if temp node has a left child or not
				if(!temp->left) {
					node* n = new node();
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of n is 1, check if temp node has a right child or not
				if(!temp->right) {
					node* n = new node();
					temp->right = n;
				}
				temp = temp->right;
			}
		}
	}

	int helper(int x_i) {
		
		// find the maximum possible XOR involving x_i using a trie

		node* cur = root;
		int XOR = 0; // to store the maximum possible XOR involing x_i

		for(int i=31; i>=0; i--) {

			int ith_bit = (x_i>>i)&1;
			if(!ith_bit) {
				// ith_bit of 'x_i' is not set
				if(cur->right) { // cur->right != NULL
					// ith_bit of XOR can be set
					XOR += (1<<i); // += 2^i
					cur = cur->right;
				} else {
					// ith_bit of XOR cannot be set
					cur = cur->left;
				}

			} else {
				// ith_bit of 'x_i' is set
				if(cur->left) { // cur->left != NULL
					// ith_bit of XOR can be set
					XOR += (1<<i); // += 2^1
					cur = cur->left;
				} else {
					// ith_bit of XOR cannot be set
					cur = cur->right;
				}
			}

		}

		return XOR;

	}

	int maximumXOR(int* x, int n) {
		int out = 0;
		for(int i=0; i<n; i++) {
			out = max(out, helper(x[i]));
		}
		return out;
	}

};

int main() {

	int arr[] = {2, 4, 8, 5, 10};
	int n = sizeof(arr) / sizeof(int);

	// int maxXOR = 0;
	// for(int i=0; i<n; i++) {
	// 	for(int j=i; j<n; j++) {
	// 		// compute the XOR for arr[i...j]
	// 		int XOR = 0;
	// 		for(int k=i; k<=j; k++) {
	// 			XOR ^= arr[k];
	// 		}
	// 		maxXOR = max(maxXOR, XOR);
	// 	}
	// }

	cout << maxXOR << endl;

	int* cxor = new int[n+1];
 	cxor[0] = 0;
 	for(int i=1; i<=n; i++) {
 		cxor[i] = cxor[i-1]^arr[i-1];
 	}

 	trie t;
 	for(int i=0; i<=n; i++) {
 		t.insert(cxor[i]);
 	}

 	cout << t.maximumXOR(cxor, n+1) << endl;

	return 0;
}