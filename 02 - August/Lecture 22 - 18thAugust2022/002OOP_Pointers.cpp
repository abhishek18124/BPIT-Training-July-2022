#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;

		customer(string n, int a, char g, double c) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			name = n;
			age = a;
			gender = g;
			credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};

int main() {	

	customer c("Mohit", 21, 'M', 500);

	cout << "&c : " << &c << endl;

	customer* cptr = &c;

	cout << "cptr : " << cptr << endl;

	// cout << "(*cptr).name : " << (*cptr).name << endl;
	// cout << "(*cptr).age : " << (*cptr).age << endl;
	// cout << "(*cptr).gender : " << (*cptr).gender << endl;
	// cout << "(*cptr).credits : " << (*cptr).credits << endl;

	// (*cptr).printCustomerInfo();


	// cout << "cptr->name : " << cptr->name << endl;
	// cout << "cptr->age : " << cptr->age << endl;
	// cout << "cptr->gender : " << cptr->gender << endl;
	// cout << "cptr->credits : " << cptr->credits << endl;

	cptr->printCustomerInfo();

	return 0;
}