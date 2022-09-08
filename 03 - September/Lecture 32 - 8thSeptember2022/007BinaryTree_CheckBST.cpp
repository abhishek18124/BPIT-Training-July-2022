/*

	Given a BST, design an algorithm transform it into a sorted linked list in-place.

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


void printLinkedList(node* head) {
	while(head != NULL) {
		cout << head->data;
		head = head->right;
		if(head) cout << "->";
	}

	cout << endl;
}

int findMaximum(node* root) {

	if(!root) { // root == NULL
		// tree is emmpty
		return INT_MIN;
	}

	while(root->right) {
		root = root->right;
	}

	return root->data;

}

int findMinimum(node* root) {

	if(!root) { // root == NULL
		// tree is emmpty
		return INT_MAX;
	}

	while(root->left) {
		root = root->left;
	}

	return root->data;

}

bool checkBST(node* root) {

	// base case
	if(!root) { // root == NULL
		// tree is empty
		return true;
	}

	// recursive case

	// 1. check if the leftSubtree is a BST -> ask your friend
	bool X = checkBST(root->left);

	// 2. check if the rightSubtree is a BST -> ask your friend
	bool Y = checkBST(root->right);

	// 3. check if the BST property is satisfied at the root node
	bool Z = root->data > findMaximum(root->left) && 
	         root->data < findMinimum(root->right) ? true : false;

	return X && Y && Z;

}

class triple {

	public :

		bool isBST;
		int maxData;
		int minData;

};

triple checkBSTEfficient(node* root) {

	triple t;

	// base case
	if(!root) { // root == NULL
		// tree is empty
		t.isBST = true;
		t.maxData = INT_MIN;
		t.minData = INT_MAX;

		return t;
	}


	// recursive case

	// 1. recursively check if the leftSubtree is a BST & simultaneously compute its minimum & maximum value
	triple tL = checkBSTEfficient(root->left);


	// 2. recursively check if the rightSubtree is a BST & simultaneously compute its minimum & maximum value
	triple tR = checkBSTEfficient(root->right);

	// 3. check if the BST property is satisfied at the root node
	bool Z = root->data > tL.maxData && 
	         root->data < tR.minData ? true : false;

	t.isBST = tL.isBST && tR.isBST && Z;
	t.maxData = max({tL.maxData, root->data, tR.maxData});
	t.minData = min({tL.minData, root->data, tR.minData});

	return t;

}

bool checkBSTUsingRange(node* root, long long lb, long long ub) {

	if(!root) { // root == NULL
		// tree is empty
		return true;
	}

	return root->data > lb && root->data < ub &&
	       checkBSTUsingRange(root->left, lb, root->data) &&
	       checkBSTUsingRange(root->right, root->data, ub);

}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	checkBST(root) ? cout << "true" << endl :
	                 cout << "false" << endl;

	triple t = checkBSTEfficient(root);                
	t.isBST ? cout << "true" << endl :
	          cout << "false" << endl;


	long long lb = (long long)INT_MIN-1;
	long long ub = (long long)INT_MAX+1;

	checkBSTUsingRange(root, lb, ub) ? cout << "true" << endl :
	                                   cout << "false" << endl;


	return 0;
}