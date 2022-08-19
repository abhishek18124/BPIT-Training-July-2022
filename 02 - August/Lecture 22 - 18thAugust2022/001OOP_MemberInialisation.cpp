#include<iostream>

using namespace std;

class creditCard {

	public :

		string cardNumber;
		string cardBankName;

		creditCard() {
			cout << "\ninside default constructor of \'creditCard\' class\n";
			
		}

		creditCard(string cn, string cbn) {
			cout << "\ninside parameterised constructor of \'creditCard\' class\n";
			cardNumber = cn;
			cardBankName = cbn;
		}

};

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;
		creditCard card; // member object
		
		customer(string n, int a, char g, double c, string cn, string cbn) : name(n), age(a), gender(g), credits(c), card(cn, cbn)  {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			// name = n;
			// age = a;
			// gender = g;
			// credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
			cout << "Card Number :" << card.cardNumber << endl;
			cout << "Card Bank Name : " << card.cardBankName << endl;
		}

};

int main() {

	customer c("Vaibhav", 20, 'M', 100, "1234-5678", "SBI");

	c.printCustomerInfo();
		
	return 0;
}