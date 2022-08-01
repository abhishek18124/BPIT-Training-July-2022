#include<iostream>
#include<cstring>

using namespace std;

void stringCopy(char* str1, char* str2) {
	int i = 0; // to iterate over char. of str1
	int j = 0; // to iterate over char. of str2

	int m = strlen(str2);
	while(j <= m) {
		str1[i] = str2[j];
		i++;
		j++;
	}
}

int main() {

	char str1[100] = "hello";
	char str2[] = "wow";

	cout << "Before copy : " << str1 << endl;

	// stringCopy(str1, str2);

	strcpy(str1, str2);
	
	cout << "After copy : " << str1 << endl;

	return 0;
}