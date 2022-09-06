/*

given the pre-order traversal of a binary tree, design a recursive algorithm 
to compute its diameter

	  diameter of a binary tree is the length of the longest path between any 
	  two nodes in the binary tree.

Example : Input  : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 5

          Input  : 10 20 30 50 -1 -1 -1 40 -1 60 -1 -1 70 -1 -1
          Output : 4
          
          Input  : 10 20 -1 -1 30 40 60 -1 -1 -1 50 -1 70 -1 -1
          Output : 4
          
*/

#include<iostream>
#include<cmath>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};


node* buildTree() {

	int data;
	cin >> data;

	// base case

	if(data == -1) {
		// construct an empty tree and return pointer to its root node
		return NULL;
	}

	// recursive case

	// 1. construct the root data using the first value of the given preOrder traversal

	node* root = new node(data);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}

int computeHeight(node* root) {

	// base case
	if(!root) { // root == NULL
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

int computeDiameter(node* root) {

	// base case
	if(!root) { // root == NULL
		// tree is empty
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute the diameter of the leftSubtree
	int dL = computeDiameter(root->left);

	// 2. ask your friend to compute the diameter of the rightSubtree
	int dR = computeDiameter(root->right);

	// 3. compute the length of the longest path that goes through the root

	int hL = computeHeight(root->left);
	int hR = computeHeight(root->right);
	int lR = hL + hR + 2;

	// return max({dL, dR, lR});

	return max(dL, max(dR, lR));

}

class Pair {

	public :

		int diameter;
		int height;

};

Pair computeDiameterEfficient(node* root) {

	Pair p;

	// base case
	if(!root) { // root == NULL
		// tree is empty
		p.diameter = 0;
		p.height = -1;
		return p;
	}

	// recursive case

	// 1. recursively compute the diamter and the height of the leftSubtree
	Pair pL = computeDiameterEfficient(root->left);

	// 2. recursively compute the diamter and the height of the rightSubtree
	Pair pR = computeDiameterEfficient(root->right);

	int lR = pL.height + pR.height + 2;
	p.diameter = max({pL.diameter, pR.diameter, lR});

	p.height = 1 + max(pL.height, pR.height);

	return p;

}

int main() {

	node* root = buildTree();

	// cout << computeDiameter(root) << endl;

	Pair p = computeDiameterEfficient(root);
	cout << p.diameter << endl;

	return 0;
}