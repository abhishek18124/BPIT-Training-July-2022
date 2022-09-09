/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

class myGreaterComparator {

	public :

	// return true when 'swap' is needed otherwise return false

	// assume 'b' is the data of the newly inserted node, and 
	// 'a' is its parent node

	bool operator()(int a, int b) {
		// if(b < a) {
		// 	// you need a swap
		// 	return true;
		// } else {
		// 	// you don't need a swap
		// 	return false;
		// }

		return b < a;
	}

};

int main() {

	priority_queue<int, vector<int>, myGreaterComparator> m; 
	
	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl;

	while(!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}