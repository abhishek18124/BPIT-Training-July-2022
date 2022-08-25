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

	// 1. create a new node on the heap with the given data
	node* n = new node(data);

	// 2. update the next pointer of the newly created node
	// such that it holds the address of the current head.
	n->next = head;

	// 3. make the newly created node as the new head of the
	// linked list.
	head = n;

}

// node* insertAtHead(node* head, int data) {

// 	// 1. create a new node on the heap with the given data
// 	node* n = new node(data);

// 	// 2. update the next pointer of the newly created node
// 	// such that it holds the address of the current head.
// 	n->next = head;

// 	// 3. make the newly created node as the new head of the
// 	// linked list.
// 	head = n;

// 	return head;

// }

void printLinkedList(node* head) {

	// while(head != NULL) { // NULL or 0 or false
	// 	cout << head->data << " ";
	// 	head = head->next;
	// }

	while(head) { // head != NULL 
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	// head = insertAtHead(head, 50);
	// head = insertAtHead(head, 40);
	// head = insertAtHead(head, 30);
	// head = insertAtHead(head, 20);
	// head = insertAtHead(head, 10);

	printLinkedList(head);

	return 0;
}

