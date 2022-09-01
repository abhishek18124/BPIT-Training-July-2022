#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int A[] = {2, 5, 1, 3, 6, 4, 0};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> = {val, idx}
	vector<int> out;

	for(int i=n-1; i>=0; i--) {

		while(!s.empty() && s.top().first >= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			out.push_back(n);
		} else {
			out.push_back(s.top().second);
		}

		s.push({A[i], i});

	}

	reverse(out.begin(), out.end());

	for(int i=0; i<n; i++) {
		cout << out[i] << " ";
	}

	cout << endl;


	return 0;
}