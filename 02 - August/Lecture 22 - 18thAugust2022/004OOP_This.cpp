#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;

		customer() {
			cout << "\ninside default constructor of \'customer\' class\n";
		}

		customer(string name, int age, char gender, double credits) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			this->name = name;
			(*this).age = age;
			this->gender = gender;
			this->credits = credits;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << this->name << endl;
			cout << "Age : " << this->age << endl;
			cout << "Gender : " << this->gender << endl;
			cout << "Credits : " << this->credits << endl;
		}

		bool isSameObject(customer* cptr) {
			return cptr == this;
		}

};


int main() {

	customer c("Pradyumn", 19, 'M', 100);

	c.printCustomerInfo();

	customer c2("Mohit", 20, 'M', 200);

	c.isSameObject(&c2) ? cout << "true" << endl :
	                     cout << "false" << endl;

	return 0;
}