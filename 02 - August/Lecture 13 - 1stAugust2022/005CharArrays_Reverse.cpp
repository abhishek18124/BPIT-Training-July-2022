#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "hello";

	cout << "Original string : " << str << endl;

	int i = 0;
	int j = strlen(str)-1;

	while(i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}

	cout << "Reversed  string after 1st reverse : " << str << endl; 

	// strrev -> cstring

	// reverse -> algorithm

	reverse(str, str+strlen(str));

	cout << "Reversed  string after 2nd reverse : " << str << endl; 
	

	return 0;
}