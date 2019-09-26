#include <iostream>

using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) // ++i, i = i + 1, i += 1
    cout << i;
  cout << '\n'; // buffers the stuff so it may crash without showing anything
  for (int i = 1; i <= 10; i++)
    cout << i << endl; // endl forces a flush and goes to new line
  int i;
  for (i = 10; i >= 0; i--) {
    cout << i << ' ';
  }
  cout << "blastoff\n";
  cout << "\n\nbuffer overflow:\n";
  signed int a = 1, b = 2;
  int c = a + b;
  int d = 1000000000 + 2000000000;
  int e = a - b;
  unsigned int f = 1 - 2;
  int g = 2 * 3;
  int h = 1000000 * 100000;
  int ageInSeconds = 20 * 365 * 24 * 60 * 60;
  int ageInSeconds2 = 69 * 365 * 24 * 60 * 60;
  cout << a << '\n';
  cout << b << '\n';
  cout << c << '\n';
  cout << d << '\n';
  cout << e << '\n';
  cout << f << '\n';
  cout << g << '\n';
  cout << h << '\n';
  cout << ageInSeconds << '\n';
  cout << ageInSeconds2 << '\n';
  /*
    3 bit computer
    unsigned:    signed (2s complement)
    000 = 0      =  0
    001 = 1      =  1
    010 = 2      =  2
    011 = 3      =  3
    100 = 4      = -4
    101 = 5      = -3
    110 = 6      = -2
    111 = 7      = -1
      1
    ====
   1000
    000
  */
  cout << "\n\nsummations and overflow\n";
  int sum = 0; // ints do not default to 0!!! always initialize
  for (int i = 1; i <= 10; i++)
    sum += i;
  cout << "sum: " << sum << endl;
  cout << "\n\factorial\n";
  const int n = 30;
  uint64_t prod = 1; // don't use longs because you can't define it as 64 bit
  for (int i = 1; i < n; i++) {
    prod *= i; // type promotion uint64_t * int
    cout << prod << ", ";
  }
  cout << '\n';
  cout << "\n\ndivision\n" << endl;
  cout << 2 / 3 << ' ' << 17 / 5 << '\n';
  cout << 2 % 3 << ' ' << 17 % 5 << '\n';
  cout << 2.0 / 3 << ' ' << 17.0 / 5 << '\n';
  cout << "\n\nloops\n" << endl;
  for (int i = 1; i <= 10; i++)
    cout << i;
  int k = 1;
  while (k <= 10) {
    cout << k;
    k++;
  }
  return 0;
}
