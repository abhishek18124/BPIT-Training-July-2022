/* 
	
	Implementation of the disjoint set union data structure.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

template <typename T>
class disjointSet {

	unordered_map<T, T> parentMap; // to store a mapping b/w vertices & their parents
	
	public :

	void createSet(T x) {
		parentMap[x] = x;
	}

	T findSet(T x) {

		// base case
		if(parentMap[x] == x) {
			// x is the leader of the set
			return x;
		}

		// recursive case
		return findSet(parentMap[x]);
	}

	void unionSet(T x, T y) {
		T l_x = findSet(x);
		T l_y = findSet(y);

		if(l_x != l_y) {
			// perform the union b/w the two sets
			parentMap[l_y] = l_x; // or parentMap[l_x] = l_y; 
		}
	}

};

int main() {

	disjointSet<int> ds;

	ds.createSet(1); // {1}
	ds.createSet(2); // {2}
	ds.createSet(3); // {3}
	ds.createSet(4); // {4}

	ds.unionSet(2, 3); // {2, 3}

	cout << ds.findSet(3) << endl; // 2

	ds.unionSet(1, 4); // {1, 4}

	cout << ds.findSet(4) << endl; // 1

	ds.unionSet(3, 4); // {1, 2, 3, 4}

	cout << ds.findSet(4) << endl; // 2

	return 0;
}