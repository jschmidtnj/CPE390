// 1.234567f float (32 bit)
// 1.5 6.022E+23
// 1.234567890123456 double (64 bit)
// 123e+308
// 1.23456789012345678901234567890 long double (128 bit)

double mean(const int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += a[i];
  return (double)sum / (double)n;
}
