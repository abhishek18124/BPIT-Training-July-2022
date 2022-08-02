#include<iostream>

using namespace std;

int main() {
	
	// no. of rows is optional during init. of 2d array
	int A[][4] = {{10, 20, 30, 40},
                  {50, 60, 70, 80},
                  {90, 100}};

	// int A[3][4] = {};

    for(int i=0; i<3; i++) {
    	for(int j=0; j<4; j++) {
    		cout << A[i][j] << " ";
    	}
    	cout << endl;
    }  

	return 0;
}