#include <iostream>

using namespace std;

extern int add(int a, int b);
const int to = 10;
const int from = 1;

int main(const int argc, char* const argv[]) {
  int sum = 0;
  for (int i = from; i <= to; i++)
    sum = add(sum, i);
  cout << "sum from " << from << " to " << to << " = " << sum << '\n';
}

