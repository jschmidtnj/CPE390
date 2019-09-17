#include <iostream>

using namespace std;

// this global variable is initialized to 0 (but initialize to 0 anyway)
int x;

/**
 * 3n+1 collatz conjecture
 * pick n (positive integer)
 * if n is odd, multiply by 3 add 1
 * if n is even, divide by 2
 * repeat until n reaches 1
 */
void collatzConjecture(int n) {
  while (n != 1) {
    if (n % 2 == 1)
      n = n * 3 + 1;
    else
      n /= 2;
    cout << n << ' ';
  }
  cout << endl;
}

/**
 * recursive solutions are a bit slower because
 * they have to be added to the stack
 * it's ok to go up down up down, but don't go a million deep
 */
void collatz2Recursive(int n) {
  cout << n << ' ';
  if (n % 2) collatz2Recursive(n / 2);
  else collatz2Recursive(3 * n + 1);
}

/**
 * multiplication table
 * read in n(5) return nxn table
 */
void multiplicationTable(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i;
    for (int j = 2; j <= n; j++) {
      cout << ' ' << i * j;
    }
    cout << '\n';
  }
}

void isEven(int n) {
  cout << (n % 2 == 1 ? "odd" : "even") << endl;
}

void f() {
  // variable uninitialized so it's not zero to begin with
  int sum;
  for (int i = 0; i <= 10; i++) {
    sum += i;
    cout << sum << '\n';
  }
}

void g() {
  int a = 123;
  int b = 321;
}

int main() {
  // g();
  // f();
  // cout << "test" << flush; // actually prints the output here, instead of buffering
  // cout << endl;
  // isEven(5);
  collatzConjecture(10);
  multiplicationTable(5);
  int a[4]; // creates uninitialized array (random stuff on stack)
  int b[4] = {3}; // creates [3, 0, 0, 0] - the rest are initialized
  for (int i = 0; i < 5; i++) // you are allowed to do this, but if you go past your program's allocated
    cout << b[i] << ' '; // space, the os will shut it down
  // int x = 0;
  // cout << 5 / x << '\n'; // divide by 0 crashes
  return 0;
}

/**
 * generate assembly code
 * need optimization to make the code bearable
 * g++ -O2 -S ./day3.cpp
 */

// _Z = function (generated by c++)

// in a function, the first parameter is r0, then r1, etc.
// mov r3, #1 @ sets r3 to be equal to 1

// g++ -g day3.cpp
// -O2 turns on optimization
// -g used for debug stuff

// GDB STUFF =========================================================

// if you want to run a command in the background use `CTRL-Z` and `bg`
// `ps` shows current processes, `kill -9` kills the process
// `gdb a.out`
// `b main` sets a breakpoint at main
// `r` for run
// `R` for rebuild and run
// `n` for next
// `s` for step
// `p sum` to print sum variable
// `layout reg` for showing the different registries
// `layout src` shows current source