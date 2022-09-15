
#include<iostream>
#include<queue>

using namespace std;

int main() {

    string str = "aabca";

    int freq[26] = {0};
    for(char ch : str) {
        freq[ch-'a']++;
    }

    priority_queue<pair<int, char>> maxHeap;
    for(int i=0; i<26; i++) {
        if(freq[i] > 0) {
            maxHeap.push({freq[i], i+'a'});
        }
    }

    string out = "";
    while(!maxHeap.empty()) {
        if(maxHeap.size() == 1) {
            
            pair<int, char> p1stMax = maxHeap.top(); maxHeap.pop();
            if(p1stMax.first > 1) {
                out = "";
            } else {
                out += p1stMax.second; 
            }

        } else {
            pair<int, char> p1stMax = maxHeap.top(); maxHeap.pop();
            pair<int, char> p2ndMax = maxHeap.top(); maxHeap.pop();

            // out += p1stMax.second;
            // out += p2ndMax.second;

            out += string(1, p1stMax.second) + string(1, p2ndMax.second); 
            
            p1stMax.first--;
            if(p1stMax.first > 0) {
                maxHeap.push(p1stMax);
            }

            p2ndMax.first--;
            if(p2ndMax.first > 0) {
                maxHeap.push(p2ndMax);
            }


        }
    }

    cout << out << endl;

    return 0;
}