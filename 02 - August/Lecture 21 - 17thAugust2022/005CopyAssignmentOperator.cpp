#include<iostream>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor" << endl;
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		void operator=(customer c) {
			cout << "I am inside the copy assignment operator fn. of the customer class" << endl;
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		
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
	
	customer c1("Aarushi", 19, 'F', 1000);

	customer c2;

	c2 = c1; // copy assignment operator fn. 
	// c2.operator=(c1);
	
	c2.printCustomerInfo();


	return 0;
}