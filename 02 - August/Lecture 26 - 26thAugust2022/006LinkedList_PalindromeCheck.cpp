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

node* reverseIterative(node* head) {

	node* cur = head;
	node* prev= NULL;
	
	while(cur != NULL) {
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;
}

node* getMidPoint(node* head) {
	if(head == NULL) {
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

bool checkPalindrome(node* head) {

	// 1. divide the linkedList into two subLists around the midPoint
	node* midPoint = getMidPoint(head);
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	// 2. reverse the second subList
	head2 = reverseIterative(head2);

	// 3. compare the first subList with the second subList
	while(head2) {
		if(head->data != head2->data) {
			return false;
		}
		head = head->next;
		head2 = head2->next;
	}

	return true;
}

int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	checkPalindrome(head) ? cout << "linkedList is a palindrome" << endl :
	                        cout << "linkedList is not a palindrome" << endl;

	return 0;
}