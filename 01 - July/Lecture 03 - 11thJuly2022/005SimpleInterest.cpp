#include<iostream>

using namespace std;

int main() {

	int p; // to store the value of principal amount
	cout << "Enter the value of principal : ";
	cin >> p;

	int r; // to store the value of rate
	cout << "Enter the value of rate : ";
	cin >> r;

	int t; // to store the value of time
	cout << "Enter the value of time : ";
	cin >> t;

	cout << "SI : " << (p*r*t)/100 << endl;
	cout << "SI : " << (p*r*t)/100.0 << endl;
	cout << "SI : " << (p*r*t*1.0)/100 << endl;

	cout << "SI : " << (p*r*t)/(float)100 << endl; // explicit type-casting
	cout << "SI : " << (float)(p*r*t)/100 << endl;

	// float si = (p*r*t)/100;
	// cout << "SI : " << si << endl;

	float si = (float)(p*r*t)/100;
	cout << "SI : " << si << endl;

	return 0;
}




