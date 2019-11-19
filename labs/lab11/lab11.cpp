#include <iostream>

using namespace std;

extern int power(int b, int n); // returns b^n
extern int multiply(int a, int pow); // returns a * 2^pow

int main() {
  cout << power(2, 6) << '\n';
  cout << multiply(8, 1) << '\n';
}
