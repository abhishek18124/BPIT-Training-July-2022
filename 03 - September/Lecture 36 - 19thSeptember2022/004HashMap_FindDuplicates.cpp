#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v = {2, 1, 3, 3, 2};
	int n = v.size();

	for(int i=0; i<n; i++) {
		v[v[i]%n] += n;
	}

	for(int i=0; i<n; i++) {
		if(v[i]/n > 1) {
			// i is a repeating number
			cout << i <<  " ";
		}
	}

	cout << endl;
	
	return 0;
}