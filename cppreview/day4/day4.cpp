#include <iostream>
#include <array>

using namespace std;

/**
 * scope = where in your program can a symbol be seen
 * lifetime = when is your variable alive or dead
 * 
 * .global xxx in arm creates a global variable xxx
 */

namespace test {
  int j = 4;
};

int j = 6;

int x; // global variable
static int y; // static variable, just for this file

void foo() {
  int z = 4;
  cout << z;
  // static lifetime is whole program, just for this function
  static int z2 = 3; // only initialized in beginning of program
  cout << 3;
  z++;
  int j = 7;
  cout << j;
  cout << ::j;
  cout << test::j;
}

void mult(int a[3][2], int b[2][3], int c[3][3]) {
  for (int k = 0; k < 2; k++) {
    for (int j = 0; j < 3; j++) {
      int dot = 0;
      for (int i = 0; i < 2; i++) {
        dot += a[k][i] * b[i][j];
      }
      c[k][j] = dot;
    }
  }
}

// matrix multiplication
// if you just do b transform, it is much faster
void mult(int a[3][2], int b[2][3], int c[3][3]) {
  int *out = &c[0][0];
  for (int k = 0; k < 2; k++) {
    for (int j = 0; j < 3; j++) {
      int dot = 0;
      for (int i = 0; i < 2; i++) {
        dot += a[k][i] * b[i][j]; // b[i][j] is bad indexing
      }
      *out++ = dot;
    }
  }
}

int main() { // lifetime of main is program
  foo();
  foo();
  cout << endl;
  int x[] = {1, 2, 3};
  int y[5] = {7, 2}; // y[1] = 2, y[3] = 0
  double z[10];
  cout << x[0] << x[3]; // sequential memory is faster - memory next to each other is much faster
  // than having it spread out
  // 32 bit int = 4 bytes, so each memory location is 4 bytes over
  cout << z[0] << z[1];
  array<int, 10> errorBounded; // this has error bounds checking
  int m[3][4] = {
    {1, 2, 3, 4},
    {2, 3, 4, 5},
    {5, 6, 7, 8}
  }; // sequentially going 1, 2, 3, 4, 2, 3, 4, 5, etc. is faster than going the other way
  const int n = 100;
  int a [n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      a[i][j] = 0;
  const int n2 = 10;
  int b [n2][n2];
  for (int i = 0; i < n2; i++)
    for (int j = 0; j < n2; j++)
      b[i][j] = 0;
  cout << endl;
}
