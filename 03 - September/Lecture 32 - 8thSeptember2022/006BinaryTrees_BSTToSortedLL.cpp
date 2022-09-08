/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

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

class Pair {
	public :

		node* head;
		node* tail;
};

Pair transform(node* root) {

	Pair p;

	// base case
	if(!root) { // root == NULL
		// tree is empty
		p.head = NULL;
		p.tail = NULL;
		return p;
	}

	// recursive case

	// 1. transform the leftSubtree into a sorted linkedList -> ask your friend
	Pair pL = transform(root->left);
	if(pL.head != NULL) {
		// leftSubtree is non-empty
		pL.tail->right = root;
		p.head = pL.head;
	} else {
		p.head = root;
	}

	// 2. transform the rightSubtree into a sorted linkedList -> ask your friend
	Pair pR = transform(root->right);
	if(pR.head != NULL) {
		// rightSubtree is non-empty
		root->right = pR.head;
		p.tail = pR.tail;
	} else {
		p.tail = root;
	}

	return p;

}

void printLinkedList(node* head) {

	while(head) {
		cout << head->data << " ";
		head = head->right;	
	}

	cout << endl;
}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	Pair p = transform(root);

	cout << p.head->data << " " << p.tail->data << endl;

	printLinkedList(p.head);

	return 0;
}