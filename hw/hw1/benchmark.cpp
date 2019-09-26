#include <stdint.h>
#include <iostream>

using namespace std;

void writeBytes(uint32_t numBytes) {
  uint8_t writeTo = 0;
  for (uint32_t i = 0; i < numBytes; i++) {
    writeTo = 0;
  }
  // cout << "done" << endl;
}

int main() {
  uint32_t numBytes = 1000000000;
  writeBytes(numBytes);
}
