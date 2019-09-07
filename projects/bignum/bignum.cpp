#include <iostream>
#include <ostream>
#include <stdio.h>
#include <string>

class BigNum {
private:
  int num_;

public:
  BigNum(int num = 0):num_(num) {}
  int get_num() { return num_; }

  // This is automatically called when '+' is used with
  // between two BigNum objects
  BigNum operator+(BigNum &num) {
    int res = 0;
    __asm("ADD %[result], %[input_i], %[input_j]"
          : [ result ] "=r"(res)
          : [ input_i ] "r"(num_), [ input_j ] "r"(num.get_num()));
    return BigNum(res);
  }

  BigNum operator-(BigNum &num) {
    int res = 0;
    __asm("SUB %[result], %[input_i], %[input_j]"
          : [ result ] "=r"(res)
          : [ input_i ] "r"(num_), [ input_j ] "r"(num));
    return BigNum(res);
  }

  BigNum operator*(BigNum &num) {
    int res = 0;
    __asm("MUL %[result], %[input_i], %[input_j]"
          : [ result ] "=r"(res)
          : [ input_i ] "r"(num_), [ input_j ] "r"(num));
    return BigNum(res);
  }

  BigNum operator/(BigNum &num) {
    int res = 0;
    __asm("DIV %[result], %[input_i], %[input_j]"
          : [ result ] "=r"(res)
          : [ input_i ] "r"(num_), [ input_j ] "r"(num));
    return BigNum(res);
  }

  BigNum operator%(BigNum &num) {
    int res = 0;
    __asm("AND %[result], %[input_i], %[input_j]"
          : [ result ] "=r"(res)
          : [ input_i ] "r"(num_), [ input_j ] "r"(num.get_num() - 1));
    return BigNum(res);
  }

  BigNum operator-() {
    int res = 0;
    __asm("NEG %[result], %[input_i]"
          : [ result ] "=r"(res)
          : [ input_i ] "r"(num_));
    return res;
  }

  void print(std::ostream &s) {
    std::string res = std::to_string(num_);
    s.write(res.c_str(), res.length);
  }
};

int main(void) {
  BigNum a = BigNum(5);
  BigNum b = BigNum(10);
  // std::cout << (a + b).get_num() << std::endl;
  return 0;
}
