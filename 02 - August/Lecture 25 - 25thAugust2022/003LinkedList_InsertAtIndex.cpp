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

	while(head) { // head != NULL
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;

}

node* getNode(node* head, int j) {

	int k = 0;
	node* temp = head;
	while(k < j && temp) { // k < j and temp != NULL
		temp = temp->next;
		k++;
	}

	return temp;

}

void insertAtIndex(node*& head, int data, int i) {

	if(i == 0) {
		insertAtHead(head, data);
		return;
	}

	// 1. create a new node with the given data
	node* n = new node(data);

	// 2. get hold of the pointer to the node at the (i-1)th index
	node* prev = getNode(head, i-1);

	if(!prev) { // prev == NULL
		// index 'i' exceeds the length of the linkedList
		return;
	}

	// 3. update the next field of the newly created node such that
	// it holds the address of the node that comes after prev node.
	n->next = prev->next;

	// 4. update the next field of the prev node such that it holds
	// the addreses of the newly created node
	prev->next = n;

}

int main() {

	node* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	insertAtIndex(head, 25, 2);

	printLinkedList(head);

	return 0;
}