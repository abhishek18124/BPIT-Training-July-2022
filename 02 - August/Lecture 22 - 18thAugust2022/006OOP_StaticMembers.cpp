#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;
		static int count; // to store the count of objects of customer class created so far

		customer() {
			cout << "\ninside default constructor of \'customer\' class\n";
			count++;
		}

		customer(string name, int age, char gender, double credits) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->credits = credits;
			count++;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		static int getCount() {
			return count;
		}

};

int customer::count = 0;

int main() {

	customer c1;
	customer c2;
	customer c3;

	cout << c1.count << endl;
	cout << c2.count << endl;
	cout << c3.count << endl;
	cout << customer::count << endl;

	cout << c1.getCount() << endl;
	cout << c2.getCount() << endl;
	cout << c3.getCount() << endl;
	cout << customer::getCount() << endl;
	
	return 0;
}