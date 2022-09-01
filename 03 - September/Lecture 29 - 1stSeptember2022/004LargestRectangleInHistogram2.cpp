#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	vector<int> nsl; // nearest smaller element towards the left
	deque<pair<int, int>> s; // I am using a deque obj. as a stack

	for(int i=0; i<n; i++) {

		while(!s.empty() && s.back().first >= h[i]) {
			s.pop_back();
		}

		if(s.empty()) {
			nsl.push_back(-1);
		} else {
			nsl.push_back(s.back().second);
		}

		s.push_back({h[i], i});

	}

	s.clear();

	vector<int> nsr; // nearest smaller element towards the right
	
	for(int i=n-1; i>=0; i--) {

		while(!s.empty() && s.back().first >= h[i]) {
			s.pop_back();
		}

		if(s.empty()) {
			nsr.push_back(n);
		} else {
			nsr.push_back(s.back().second);
		}

		s.push_back({h[i], i});

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