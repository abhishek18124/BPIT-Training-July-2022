/*

	Implement a phonebook storing mapping between person's name and 
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["abhishek"].push_back("1234");
	phoneMap["abhishek"].push_back("5678");

	phoneMap["sahil"].push_back("0000");
	phoneMap["sahil"].push_back("1111");

	phoneMap["rishu"].push_back("2222");

	for(pair<string, vector<string>> p : phoneMap) {

		cout << p.first << " : ";
		vector<string> numbers = p.second;
		for(string num : numbers) {
			cout << num << " ";
		}
		cout << endl;

	}


	return 0;
}