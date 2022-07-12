#include<iostream>

using namespace std;

int main() {

	int marks;

	cout << "Enter your marks : ";
	cin >> marks;

	if(marks >= 90) {
		cout << "Grade A" << endl;
	} else if(marks >= 80) {
		cout << "Grade B" << endl;
	} else if(marks >= 70) {
		cout << "Grade C" << endl;
	} else if(marks >= 60) {
		cout << "Grade D" << endl;
	} else if(marks >= 50) {
		cout << "Grade E" << endl;
	} else {
		cout << "Grade F" << endl;
	}

	cout << "You are outside the if-else-if block" << endl; 

	
	return 0;
}