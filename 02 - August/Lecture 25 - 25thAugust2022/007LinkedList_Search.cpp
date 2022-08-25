#include<iostream>

using namespace std;

class node {

	public :

		int data;
		node* next;

		node(int data) {
			this->data = data;
			this->next = NULL;
		}

};


void insertAtHead(node*& head, int data) {
	
	node* n = new node(data);
	n->next = head;
	head = n;

}

void printLinkedList(node* head) {
	
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	
	cout << endl;
}

bool searchIterative(node* head, int target) {

	node* temp = head;
	while(temp) { // temp != NULL
		if(temp->data == target) {
			return true;
		}
		temp = temp->next;
	}

	return false;

}

bool searchRecursive(node* head, int target) {

	// base case
	if(!head) { // head == NULL
		return false;
	}

	// recursive case

	if(head->data == target) {
		return true;
	}

	// ask your friend to search for the target in the sub-list
	// that starts from the node which comes after the head node.

	return searchRecursive(head->next, target);
}

int main() {

	node* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int target = 130;

	searchIterative(head, target) ? cout << target << " found!" << endl :
	                                cout << target << " not found!" << endl;

	searchRecursive(head, target) ? cout << target << " found!" << endl :
	                                cout << target << " not found!" << endl;


	return 0;
}