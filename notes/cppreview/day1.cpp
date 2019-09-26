#include <iostream>

using namespace std;

// entry point
// 32 bits is an int
int main() {
  int i;
  for (i = 1; i < 10; i++)
    cout << i << ' ';
  cout << '\n';
  // print 1-10 on separate lines
  for (i = 1; i < 11; i++)
    cout << i << '\n';
  // print 1, 2, 4, 8, ..., 1024
  int last_i = 1;
  int current_i;
  cout << "1, ";
  for (i = 1; i < 11; i++) {
    current_i = 2 * last_i;
    cout << current_i;
    last_i = current_i;
    if (i != 10)
      cout << ", ";
  }
  cout << '\n';
  return 0;
}
