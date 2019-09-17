// #! /usr/bin/python - used for script languages to show that it is a script to be run with that application - makes up first 4 bytes of file
// file a.out # shows what a.out looks like
// g++ -c day4a.cpp
// objdump day4a.o
// which python # shows where the application is located

// using multiple files
// g++ -c day4.cpp day4a.cpp
// g++ day4.o day4a.cpp -o myprogram.out

#include <iostream>

using namespace std;

void f();
extern int x;

int main() {
  cout << "test1";
  f();
  cout << x << endl;
}
