#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s;
	vector<int> span;

	for(int i=0; i<n; i++) {

		// span_i = ? 

		while(!s.empty() && s.top().first <= A[i]) {
			s.pop();
		}

		int j;

		if(s.empty()) {
			j = -1;
		} else {
			j = s.top().second;
		}

		span.push_back(i-j);
		s.push({A[i], i}); // make_pair(A[i], i);

	}

	for(int i=0; i<span.size(); i++) {
		cout << span[i] << " ";
	}

	cout << endl;

	return 0;
}