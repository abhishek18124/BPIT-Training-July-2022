#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	int age;
	string name; 
	
	customer(string name, int age) {
		this->age = age;
		this->name = name;
	}	
};

/* 
	return 'true' when a swap isn't required.

*/

bool myComparator(customer c1, customer c2) {
	return c1.name < c2.name;
}

int main() {

	vector<customer> v;

	v.push_back(customer("Peeyush", 20));
	v.push_back(customer("Vaibhav", 19));
	v.push_back(customer("Pradyumn", 21));
	v.push_back(customer("Mohit", 18));

	// for(customer c : v) {
	// 	cout << c.name << " " << c.age << endl;
	// }

	sort(v.begin(), v.end(), myComparator);
	
	for(customer c : v) {
		cout << c.name << " " << c.age << endl;
	}
	
	cout << endl;	

	return 0;
}