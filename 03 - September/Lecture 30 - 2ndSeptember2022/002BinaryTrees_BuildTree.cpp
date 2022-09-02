/*

Design a recursive algorithm to build a binary tree given its pre-order traversal.

eg: preOrder : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
              
*/

#include<iostream>

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


void printPreOrder(node* root) {

	// base case
	if(!root) { // root == NULL
		cout << -1 << " ";
		return;
	}

	// recursive case

	// 1. process the root node
	cout << root->data << " ";

	// 2. do the preOrder traversal of the leftSubtree
	printPreOrder(root->left);

	// 3. do the preOrder traversal of the rightSubtree
	printPreOrder(root->right);

}


node* buildTree() {

	int data;
	cin >> data;

	if(data == -1) {
		return NULL;
	}

	// 1. construct the root node from the 1st value
	node* root = new node(data);

	// 2. build the leftSubtree from its preOrder traversal
	root->left = buildTree();

	// 3. build the rightSubtree from its preOrder traversal
	root->right = buildTree();

	return root;

}

int main() {
	
	node* root = NULL;

	root = buildTree();

	printPreOrder(root);

	cout << endl;

	return 0;
}