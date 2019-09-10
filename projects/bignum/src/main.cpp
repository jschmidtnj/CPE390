#include <iostream>
#include <ostream>
#include <stdio.h>
#include <string>
#include <BigNum.hh>

BigNum::BigNum(uint64_t v):a_(v) {}

// write in .s file, call it from here

// make the functions and use name mangling to get the same function
// created in the .s file
// nm bignum.o
// g++ -)2 -g -5 bignum.cpp

/*
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
*/

int main(void) {
  BigNum a(5);
  BigNum b(10);
  BigNum c = a + b;
  std::cout << c << std::endl;
  return 0;
}
