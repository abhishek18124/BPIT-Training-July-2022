#include<iostream>

using namespace std;

int main() {

	int x = 10;

	cout << x << endl;

	{

		int y = 20;

		cout << x << " " << y << endl;

		{
			
			int y = 40;
			int z = 30;

			cout << x << " " << y << " " << z << endl;
		}

	}

	return 0;
}