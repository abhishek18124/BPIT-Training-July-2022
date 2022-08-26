#include<iostream>

using namespace std;

class node {
public:

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
	
	while(head) { // head != NULL
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;
}

node* kthNodeFromLast(node* head, int k) {

	// 1. move 'fast' 'k' steps forward
	node* fast = head;
	while(k-- and fast) { // k > 0 and fast != NULL 
		fast = fast->next;
	}

	node* slow = head;

	// 2. traverse the linkedList using slow and fast
	while(fast) { // fast != NULL
		slow = slow->next;
		fast = fast->next;
	}

	return slow;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 2;

	node* kthNode = kthNodeFromLast(head, k);

	kthNode ? cout << kthNode->data << endl :
	          cout << "linkedList is empty!" << endl;

	return 0;
}