#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 1};

	int k = 3;

	unordered_map<int, int> indexMap;

	bool flag = false; // assume there doesn't exist any pair

	for(int i=0; i<v.size(); i++) {
		if(indexMap.find(v[i]) != indexMap.end()) {
			// you've previously seen the element at the ith index
			if(abs(i - indexMap[v[i]]) <= k) {
				flag = true;
				break;
			}
		}
		indexMap[v[i]] = i;
	}

	flag ? cout << "true" << endl :
	       cout << "false" << endl;
	
	return 0;
}