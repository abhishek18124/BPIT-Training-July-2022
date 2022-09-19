#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main() {

	string str = "abccccdd";

	unordered_set<char> seen;	

	int cnt = 0;

	for(char ch : str) {
		if(seen.find(ch) != seen.end()) {
			// you've seen ch before
			cnt += 2;
			seen.erase(ch);
		} else {
			seen.insert(ch);
		}
	}

	if(!seen.empty()) {
		cnt += 1;
	}

	cout << cnt << endl;
	
	return 0;
}