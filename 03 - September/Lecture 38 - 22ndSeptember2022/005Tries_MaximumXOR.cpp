/*

Given an array of non-negative integers of size n, find the maximum possible XOR between 
any two numbers present in the array.

Example: 
	Input : x[] = {25, 10, 2, 8, 5, 3} 
	Output: 28 
	Explaination: The maximum result is 5 ^ 25 = 28 
	
	Input: x[] = {1, 2, 3, 4, 5, 6, 7} 
	Output: 7 
	Explaination: The maximum result is 1 ^ 6 = 7 

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

		// x_k = x_i^XOR = x_i^(x_i^x_k)

		cout << "(" << x_i << "^" << (x_i^XOR) << ") : " << XOR << endl;

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

	int x[] = {2, 4, 5, 8, 10};
	int n = sizeof(x) / sizeof(int);

	trie t;

	for(int i=0; i<n; i++) {
		t.insert(x[i]);
	}

	cout << t.maximumXOR(x, n) << endl;
  
	return 0;
}