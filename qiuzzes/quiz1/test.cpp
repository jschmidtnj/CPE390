#include <iostream>

using namespace std;

int prod(int arr[], int len) {
  int res = 1;
  for (int i = 0; i < len; i++)
    res *= arr[i];
  return res;
}

void print_pow(int n) {
  int last_num =  1;
  for (int i = 0; last_num * (i==0 ? 1 : 2) <= n; i++) {
    int curr_num = last_num * (i == 0 ? 1 : 2);
    cout << curr_num << ' ';
    last_num = curr_num;
  }
}

int main() {
  int x[] = {5, 4, 3, 2, 1};
  int y = prod(x, 5);
  print_pow(8);
}
