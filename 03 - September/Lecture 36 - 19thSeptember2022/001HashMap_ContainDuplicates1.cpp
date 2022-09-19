#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 1};

	// unordered_map<int, int> freqMap;

	// for(int i=0; i<v.size(); i++) {
	// 	freqMap[v[i]]++;
	// }

	// // for(pair<int, int> p : freqMap) {
	// // 	cout << p.first << " : " << p.second << endl;
	// // }

	// bool flag = false; // assume, duplicates are not present

	// for(pair<int, int> p : freqMap) {
	// 	if(p.second > 1) {
	// 		// you've found a duplicate
	// 		flag = true;
	// 		break;
	// 	}
	// }

	// if(flag) {
	// 	cout << "duplicate found!" << endl;
	// } else {
	// 	cout << "duplicate not found!" << endl;
	// }

	unordered_set<int> seen; 
	bool flag = false; // assume, duplicate is not present

	for(int i=0; i<v.size(); i++) {
		if(seen.find(v[i]) != seen.end()) {
			// you've previously seen the element at the ith index
			flag = true;
			break;
		}
		seen.insert(v[i]);
	}

	flag ? cout << "duplicate found!" << endl :
	       cout << "duplicate not found!" << endl;
	
	return 0;
}