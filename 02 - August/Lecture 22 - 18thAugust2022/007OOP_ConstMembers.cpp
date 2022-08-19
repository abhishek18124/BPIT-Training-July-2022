#include<iostream>

using namespace std;

class customer {

		string name;
		int age;
		char gender;
		double credits;
		const int id; // read only member
	
	public :
	
		customer(int id, string name, int age, char gender, double credits) : id(id) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			// this->id = id; // error
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->credits = credits;
		}

		void printCustomerInfo() const {
			cout << "\nCustomer Information\n";
			cout << "Id : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		// void setName(string name) const { // error
		// 	this->name = name;
		// }

		string getName() const {
			return name;

		}

		int getAge() const {
			return age;
		}

		char getGender() const {
			return gender;
		}

		double getCredits() const {
			return credits;
		}
};


int main() {

	customer c(101, "Peeyush", 20, 'M', 1000);

	c.printCustomerInfo();

	cout << c.getName() << endl;

	const int x = 10;

	const customer c2(102, "Sahil", 20, 'M', 1000);

	c2.printCustomerInfo();

	return 0;
}