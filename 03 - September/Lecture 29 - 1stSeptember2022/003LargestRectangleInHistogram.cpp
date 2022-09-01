#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	vector<int> nsl; // nearest smaller element towards the left
	stack<pair<int, int>> s1;

	for(int i=0; i<n; i++) {

		while(!s1.empty() && s1.top().first >= h[i]) {
			s1.pop();
		}

		if(s1.empty()) {
			nsl.push_back(-1);
		} else {
			nsl.push_back(s1.top().second);
		}

		s1.push({h[i], i});

	}

	// for(int i=0; i<nsl.size(); i++) {
	// 	cout << nsl[i] << " ";
	// }

	// cout << endl;

	vector<int> nsr; // nearest smaller element towards the right
	stack<pair<int, int>> s2;

	for(int i=n-1; i>=0; i--) {

		while(!s2.empty() && s2.top().first >= h[i]) {
			s2.pop();
		}

		if(s2.empty()) {
			nsr.push_back(n);
		} else {
			nsr.push_back(s2.top().second);
		}

		s2.push({h[i], i});

	}

	reverse(nsr.begin(), nsr.end());

	// for(int i=0; i<nsr.size(); i++) {
	// 	cout << nsr[i] << " ";
	// }

	// cout << endl;

	int maxArea = 0;
	for(int i=0; i<n; i++) {
		int w_i = nsr[i]-nsl[i]-1;
		int a_i = h[i] * w_i;
		cout << a_i << " ";
		maxArea = max(maxArea, a_i);
	}

	cout << endl;

	cout << maxArea << endl;

	return 0;
}