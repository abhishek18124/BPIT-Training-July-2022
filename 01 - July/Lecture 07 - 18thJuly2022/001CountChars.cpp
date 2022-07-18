#include<iostream>

using namespace std;

int main() {

	char ch;
	int count = 0;

	while(true) {
		// cin >> ch;
		ch = cin.get();
		if(ch == '$') {
			break;
		}
		count++;
	}

	cout << "count = " << count << endl;

	return 0;
}