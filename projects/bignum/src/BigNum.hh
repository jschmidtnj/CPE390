#pragma once
#include <ostream>

/**
 * BigNum
 * use 128 bit numbers. made with 2 unsigned 64 bit numbers
 * one for negative and one for positive
 */

class BigNum {
private:
  uint64_t a_, b_; // 128 bit implementation
public:
  BigNum(uint64_t v);
  friend BigNum operator+(const BigNum &a, const BigNum &b);
  friend BigNum operator-(const BigNum &a, const BigNum &b);
  friend BigNum operator*(const BigNum &a, const BigNum &b);
  friend BigNum operator/(const BigNum &a, const BigNum &b);
  friend BigNum operator%(const BigNum &a, const BigNum &b);
  BigNum operator-() const; // this is the same as above but friend
  // is preferred because 1 + BigNum works just like BigNum + 1 with
  // friend but not with the other way
  friend void print(std::ostream &s, const BigNum b);
};
