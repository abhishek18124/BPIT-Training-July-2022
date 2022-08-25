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

void deleteAtHead(node*& head) {

	if(!head) { // head == NULL
		// linkedList is empty
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;
}

node* getNode(node* temp, int j) {

	int k = 0;
	while(temp != NULL && k < j) { // while(temp && k < j)
		temp = temp->next;
		k++;
	}

	return temp;

}

void deleteAtIndex(node*& head, int i) {

	if(i == 0) {
		deleteAtHead(head);
		return;
	}

	// 1. get hold of the pointer to the node at the ith index
	node* cur = getNode(head, i);

	if(!cur) { // cur == NULL
		// index 'i' is >= length of the linkedList
		return;
	}

	// 2. get hold of the pointer to the node at the (i-1)thh index
	node* prev = getNode(head, i-1);

	// 3. update the next field of the prev node such that it
	// holds the address of the node that comes after cur node.
	prev->next = cur->next;

	// 4. delete the current node
	delete cur;

}

int main() {

	node* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	printLinkedList(head);

	deleteAtIndex(head, 2);

	printLinkedList(head);

	return 0;
}