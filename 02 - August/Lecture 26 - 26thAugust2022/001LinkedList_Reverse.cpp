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

node* reverseIterative(node* head) {

	node* prev = NULL;
	node* cur = head;

	while(cur) { // cur != NULL
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;

}

node* reverseRecursive(node* head) {

	// base case
	
	// if(!head) { // or head == NULL
	// 	return head;
	// }

	// if(!head->next) { // or head->next == NULL
	// 	return head;
	// }

	if(!head or !head->next) {
		return head;
	}

	// recursive case

	// 1. ask your friend to reverse the sub-list which starts from
	// the node that comes after the head node

	node* revHead = reverseRecursive(head->next);
	node* revTail = head->next;
	revTail->next = head;
	head->next = NULL;

	return revHead;

}


int main() {

	node* head = NULL; // initially, linkedList is initially empty
 
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	head = reverseIterative(head);

	printLinkedList(head);

	head = reverseRecursive(head);

	printLinkedList(head);

	return 0;
}