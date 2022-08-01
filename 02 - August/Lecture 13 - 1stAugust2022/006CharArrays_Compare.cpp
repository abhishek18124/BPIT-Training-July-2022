#include<iostream>
#include<cstring>

using namespace std;

int stringCompare(char* str1, char* str2) {

	int i = 0; // to iterate over char. of str1
	int j = 0; // to iterate over char. of str2

	while(str1[i] != '\0' and str2[j] != '\0') {
		if(str1[i] > str2[j]) {
			// str1 > str2
			return 1;
		} else if(str1[i] < str2[j]) {
			// str1 < str2
			return -1;
		}
		i++;
		j++;
	}

	if(str1[i] == '\0' and str2[j] == '\0') {
		// str1 is equal to str2
		return 0;
	} else if(str1[i] == '\0') {
		// str1 < str2
		return -1;
	} else {
		// str1 > str2
		return 1;
	}
}

int main() {

	char str1[] = "abd";
	char str2[] = "abz";

	// int res = stringCompare(str1, str2);

	// if(res == 0) {
	// 	cout << str1 << " is equal to " << str2 << endl;
	// } else if(res == 1) {
	// 	cout << str1 << " is greater than " << str2 << endl;
	// } else if(res == -1) {
	// 	cout << str1 << " is less than " << str2 << endl;
	// }

	int res = strcmp(str1, str2);

	if(res == 0) {
		cout << str1 << " is equal to " << str2 << endl;
	} else if(res > 0) {
		cout << str1 << " is greater than " << str2 << endl;
	} else if(res < 0) {
		cout << str1 << " is less than " << str2 << endl;
	}

	return 0;
}