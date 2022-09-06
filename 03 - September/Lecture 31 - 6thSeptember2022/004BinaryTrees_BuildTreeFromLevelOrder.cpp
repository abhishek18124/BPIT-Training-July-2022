/*

given the level order traversal of a binary tree, design an algorithm to construct a 
binary tree from it.

Example 
	Input: 10 20 30 40 50 -1 60 -1 -1 70 -1 -1 -1 -1 -1
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

node* buildTree() {

	queue<node*> q; // to keep track of nodes which have been construct
	                // but whose child node are yet to built

	int rootData;
	cin >> rootData;

	node* root = new node(rootData);
	q.push(root);

	while(!q.empty()) {

		node* front = q.front();
		q.pop();

		int leftData;
		cin >> leftData;

		if(leftData != -1) {
			node* leftChild = new node(leftData);
			front->left = leftChild;
			q.push(leftChild);
		}

		int rightData;
		cin >> rightData;

		if(rightData != -1) {
			node* rightChild = new node(rightData);
			front->right = rightChild;
			q.push(rightChild);
		}

	}

	return root;

}

int main() {

	node* root = buildTree();
	printLevelOrder(root);
	
	return 0;
}