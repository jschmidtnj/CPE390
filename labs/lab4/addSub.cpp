#include <iostream>
#include <sstream>

using namespace std;

extern int add(int a, int b);
extern int sub(int a, int b);

int main(const int argc, char* const argv[]) {
  if (argc != 3) {
    cerr << "2 integers not provided" << endl;
    return 1;
  }
  int a, b;
  istringstream iss1(argv[1]);
  istringstream iss2(argv[2]);
  iss1 >> a;
  iss2 >> b;
  cout << a << " + " << b << " = " << add(a, b) << '\n';
  cout << a << " - " << b << " = " << sub(a, b) << '\n';
}

