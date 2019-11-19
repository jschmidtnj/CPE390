#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int x = 2;
  cout << hex << setfill('0') << setw(8) << x << '\n';
  cout << &x << '\n';
  uint8_t *p = (uint8_t *)&x;
  cout << (int)p[0] << ' ' << (int)p[1] << ' ' << (int)p[2] << ' ' << (int)p[3] << '\n';
  float y = 2;
  int *q = (int *)&y;
  cout << hex << setfill('0') << setw(8) << *q << '\n';
  // 0100 0000 0000 0000   0000 0000 0000 0000
  // 1/2 * 4 = 2
  // calculator: https://www.h-schmidt.net/FloatConverter/IEEE754.html
}
