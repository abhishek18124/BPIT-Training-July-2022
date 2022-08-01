// n <= 50 and m <= 50

#include<iostream>
#include<cstring>

using namespace std;

void stringConcat(char* str1, char* str2) {

	int n = strlen(str1);
	int m = strlen(str2);

	int i = n; // to iterate over str1 starting from '\0'
	int j = 0; // to iterate over str2

	while(j <= m) {
		str1[i] = str2[j];
		i++;
		j++;
	}

}

int main() {

	char str1[101] = "hello";
	char str2[] = "world";

	cout << "Before concat : " << str1 << endl;

	// stringConcat(str1, str2);

	strcat(str1, str2);

	cout << "After concat : " << str1 << endl;

	return 0;
}