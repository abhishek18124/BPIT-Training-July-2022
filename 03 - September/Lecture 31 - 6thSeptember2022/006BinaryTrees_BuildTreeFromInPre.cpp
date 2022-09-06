/*

given the in-order & pre-order traversal of a binary tree, design an algorithm to construct 
a binary tree from it.

Example 
	Input: pre[] = {10, 20, 40, 50, 70, 30, 60}
	       in[]  = {40, 20, 70, 50, 10, 30, 60}

*/

#include<iostream>
#include<queue>

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

void printLevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << front->data << " ";
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}

}

void printPreOrder(node* root) {
	if(root == NULL) {
		// root represents an empty tree
		return;
	}

	cout << root->data << " ";
	printPreOrder(root->left);
	printPreOrder(root->right);
}


void printInOrder(node* root) {
	if(root == NULL) {
		// root represents an empty tree
		return;
	}

	printInOrder(root->left);
	cout << root->data << " ";
	printInOrder(root->right);
}

int i = 0; // to iterate over the preOrder traversal

node* buildTree(int* pre, int* in, int s, int e) {

	// base case

	if(s > e) {
		// inOrder traversal is empty -> therfore corresponding tree is empty
		return NULL;
	}

	// recursive case

	int x = pre[i]; i++;
	node* root = new node(x);

	int k = s;
	while(in[k] != x) {
		k++;
	}

	// 1. recursively build the leftSubtree using its inOrder traveral i.e. in[s...k-1]
	root->left = buildTree(pre, in, s, k-1);

	// 2. recursively build the rightSubtree using its inOrder traversal i.e. in[k+1...e]
	root->right = buildTree(pre, in, k+1, e);

	return root;

}

int main() {

	int pre[] = {10, 20, 40, 50, 70, 30, 60};
	int in[]  = {40, 20, 70, 50, 10, 30, 60};
	int n = sizeof(in) / sizeof(int);

	node* root = buildTree(pre, in, 0, n-1);
	
	printPreOrder(root); 
	cout << endl;
	
	printInOrder(root); 
	cout << endl;
	
	printLevelOrder(root); 
	cout << endl;

	return 0;
}