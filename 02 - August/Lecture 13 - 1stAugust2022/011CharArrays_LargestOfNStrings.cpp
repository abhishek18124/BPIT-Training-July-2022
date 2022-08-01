// strlen <= 100 

#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the no. of strings : ";
	cin >> n;

	cin.ignore();

	// cin.get();

	char inp[101];
	cin.getline(inp, 101);

	char out[101];
	strcpy(out, inp);

	int i=1;
	while(i < n) {
		cin.getline(inp, 101);
		if(strcmp(inp, out) > 0) {
			strcpy(out, inp);
		}
		i++;
	}

	cout << "largest : " << out << endl;

	return 0;
}
