#include<iostream>

using namespace std;

// // pass by value
// void inc(int a) {
//   cout << "inside inc(), before '++' a = " << a << endl;
//   a++;
//   cout << "inside inc(), after  '++' a = " << a << endl;
// }

// // pass by reference
// void inc(int& a) {
//   cout << "inside inc(), before '++' a = " << a << endl;
//   a++;
//   cout << "inside inc(), after  '++' a = " << a << endl;
// }

void inc(int* aptr) {
  (*aptr)++;
}

int main() {
  
  int a = 10;

  cout << "inside main(), before inc() a = " << a << endl;

  // inc(a);

  inc(&a);

  cout << "inside main(), after  inc() a = " << a << endl;
  
  return 0;
}