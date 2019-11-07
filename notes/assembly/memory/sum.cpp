int f(int array[], int n) {
  int res = 0;
  n--;
  for (; n >= 0; n--)
    res += array[n];
  return res;
}
