// n <= 100

#include<iostream>

using namespace std;

void readString(char* str, char delimiter='\n') {

	char ch;
	int i=0;
	while(true) {
		ch = cin.get();
		if(ch == delimiter) {
			break;
		}
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
}

int main() {

	char str[101];

	cout << "Enter a string : ";
	
	// // 1. using cin >> : it automatically adds '\0' upon reading the input string from the user
	// cin >> str;

	// // 2. using a custom function
	// readString(str, '$');

	// 3. cin.getline() : it can read whitespaces, and it automatically terminates the user input with the '\0' character.
	cin.getline(str, 101, '$'); // '\n' is the default delimiting character

	cout << "You've entered : " << str << endl;

	return 0;
}