#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int A[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> = {val, idx}
	vector<int> out;

	for(int i=0; i<n; i++) {

		while(!s.empty() && s.top().first >= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			out.push_back(-1);
		} else {
			out.push_back(s.top().second);
		}

		s.push({A[i], i});

	}

	for(int i=0; i<n; i++) {
		cout << out[i] << " ";
	}

	cout << endl;

	return 0;
}