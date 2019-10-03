#include <iostream>
#include <stdint.h>

using namespace std;

int main() {
  cout << 0x40 << '\n';
  cout << 0xC0 << '\n';
  cout << 0xFF << '\n';
  cout << (0xDEAD & 0xBEEF) << '\n'; // AND
  cout << (0xDEAD | 0xBEEF) << '\n'; // OR
  cout << (0xDEAD ^ 0xBEEF) << '\n'; // XOR
  cout << ~0x92CF << '\n'; // NOT
  cout << (int16_t(int16_t(-32768) + int16_t(-1))) << '\n'; // wraps around to highest number!
}
