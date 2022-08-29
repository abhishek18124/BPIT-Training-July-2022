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
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

node* removeDuplicates(node* head) {

	node* tail = head; // this is used to keep track of the last node we've included in the final linkedList
	node* temp = head->next; 

	while(temp) { // temp != NULL
		if(temp->data != tail->data) {
			// you are seeing the temp node for the first time, track it
			tail->next = temp;
			tail = temp;
		}
		temp = temp->next;
	}

	tail->next = NULL;

	return head;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}