/*

Given a running stream of integers, design an algorithm to print the median 
of the numbers in the stream each time a new integer is added to the stream.

Example : Input = 4, 6, 2, 5,   3, 1,   7, 9,   8 . . .
          Output= 4, 5, 4, 4.5, 4, 3.5, 4, 4.5, 5 . . .

*/

#include<iostream>
#include<queue>

using namespace std;

int main() {

    int data;
    cin >> data;

    double median = data;
    cout << median << " ";

    priority_queue<int> leftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> rightMinHeap;

    leftMaxHeap.push(data);

    while(true) {

        cin >> data;

        if(data == 0) {
            // stream has ended 
            break;
        }

        if(data > median) {
            // insert data into the rightMinHeap
            if(rightMinHeap.size() > leftMaxHeap.size()) {
                // currently rightMinHeap has N+1 elements and leftMaxHeap has N elements, therefore rebalance
                leftMaxHeap.push(rightMinHeap.top()); 
                rightMinHeap.pop();

                // at this point rightMinHeap has N elements and leftMaxHeap has N+1 elements
                rightMinHeap.push(data);

                // at this point both rightMinHeap and leftMaxHeap have N elements
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;

            } else if(rightMinHeap.size() < leftMaxHeap.size()) {
                // currentlly rightMinHeap has N elements and leftMaxHeap has N+1 elements
                rightMinHeap.push(data);
                // at this point both heaps are equal
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            } else {
                // at this point both heaps are equal
                rightMinHeap.push(data);
                // at this point rightMinHeap has N+1 elements and leftMaxHeap has N elements
                median = rightMinHeap.top();
            }

        } else {
            // insert data into the leftMaxHeap

            if(leftMaxHeap.size() > rightMinHeap.size()) {
                // left -> N+1 and right -> N therefore rebalance
                rightMinHeap.push(leftMaxHeap.top());
                leftMaxHeap.pop();

                // left -> N and right -> N+1
                leftMaxHeap.push(data);

                // left -> N+1 and right -> N+1
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;

            } else if(leftMaxHeap.size() < rightMinHeap.size()) {
                // left -> N and right -> N+1 elements
                leftMaxHeap.push(data);
                // left -> N+1 and right -> N+1 elements
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;

            } else {
                // left -> N and right -> N
                leftMaxHeap.push(data);
                // left->N+1 and right -> N
                median = leftMaxHeap.top();

            }
        }

        cout << median << " ";

    }

    return 0;
}