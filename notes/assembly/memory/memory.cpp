#include <iostream>

// function in memory.s
extern int f(int array[], int n);

int the_sum(int array[], int n) {
  int res = 0;
  for (int i = 0; i < n; i++)
    res += array[i];
  return res;
}

int main() {
  int x[] = {6, 4, 3, 2};
  std::cout << f(x, 4) << '\n';
}
