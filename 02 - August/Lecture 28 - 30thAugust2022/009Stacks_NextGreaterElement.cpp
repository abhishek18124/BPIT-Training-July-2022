#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);
	vector<int> out;

	stack<int> s;

	for(int i=n-1; i>=0; i--) {
			
		while(!s.empty() && s.top() <= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			// there is no greater element towards the 
			// right of the element at the ith index
			
			// cout << -1 << " ";
			out.push_back(-1);
		} else {
			// cout << s.top() << " ";
			out.push_back(s.top());
		}

		s.push(A[i]);

	}

	reverse(out.begin(), out.end());

	for(int i=0; i<out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;

	return 0;
}