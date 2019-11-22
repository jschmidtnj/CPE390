#include <iostream>

using namespace std;

extern int mult(int a, int b); // returns a * b

int main() {
  cout << mult(8, 7) << '\n';
}
