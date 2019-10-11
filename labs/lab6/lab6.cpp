#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0) return 1;
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}

int get_max(int arr[], int len) {
  int max_num = arr[0];
  for (int i = 0; i < len; i++)
    if (arr[i] > max_num) max_num = arr[i];
  return max_num;
}

void print_max(int arr[], int len) {
  cout << get_max(arr, len) << endl;
}

int main() {
  cout << factorial(5) << endl;
  int thearray[] = {2, 5, 7, 9, 1};
  print_max(thearray, 5);
}

