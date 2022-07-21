#include<iostream>

using namespace std;

void inc(int& x) {
	cout << "inside inc() : before inc :  x = " << x << endl;
	x++;
	cout << "inside inc() : after inc :  x = " << x << endl;
}

int main() {

	int a = 0;

	cout << "inside main() : before inc() :  a = " << a << endl;

	inc(a);
	
	cout << "inside main() : after inc() :  a = " << a << endl;

	return 0;
}