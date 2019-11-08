double testdotprod(double arr1[], double arr2[], int len) {
  double res = 0;
  for (int i = 0; i < len; i++)
    res += arr1[i] * arr2[i];
  return res;
}
