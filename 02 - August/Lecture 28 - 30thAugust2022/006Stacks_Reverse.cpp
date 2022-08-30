#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> s) {

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	cout << endl;

}

void insertAtBottom(stack<int>& s, int data) {

	// base case
	if(s.empty()) {
		s.push(data);
		return;
	}

	// recursive case

	// 1. save the value currently at the top of the stack
	int x = s.top(); 
	s.pop();

	// 2. ask your friend to insert 'data' at the bottom of the resulting stack
	insertAtBottom(s, data);

	// 3. push 'x' at the top of the stack
	s.push(x);

}

void reverse(stack<int>& s) {

	// base case
	if(s.empty()) {
		return;
	}

	// recursive case

	// 1. save the value currently at the top of the stack
	int x = s.top();
	s.pop();

	// 2. ask your friend to reverse the resulting stack
	reverse(s);

	// 3. insert 'x' at the bottom of the stack
	insertAtBottom(s, x);

}

int main() {

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	print(s);

	reverse(s);

	print(s);

	return 0;
}