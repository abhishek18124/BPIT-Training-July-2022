#include<iostream>

using namespace std;

bool checkAnagrams(char* str1, char* str2) {

	int freq1[26] = {0};
	for(int i=0; str1[i] != '\0'; i++) {
		char ch = str1[i];
		int idx = ch-'a';
		freq1[idx]++;
	}

	int freq2[26] = {};
	for(int i=0; str2[i] != '\0'; i++) {
		freq2[str2[i]-'a']++;
	}

	for(int i=0; i<26; i++) {
		if(freq1[i] != freq2[i]) {
			return false;
		}
	}

	return true;

}

int main() {

	char str1[] = "abbbac"; 
	char str2[] = "cabbbca"; 

	checkAnagrams(str1, str2) ? cout << "anagrams!" << endl :
	                            cout << "not anagrams!" << endl;

	return 0;
}