#include <iostream>
#include <limits>

using namespace std;

double maximum(double array[], int len)
{
  if (len < 1)
    return -1 * numeric_limits<double>::infinity();
  double res = array[0];
  for (int i = 0; i < len; i++)
    if (array[i] > res)
      res = array[i];
  return res;
}

double minimum(double array[], int len)
{
  if (len < 1)
    return numeric_limits<double>::infinity();
  double res = array[0];
  for (int i = 0; i < len; i++)
    if (array[i] < res)
      res = array[i];
  return res;
}

double average(double array[], int len)
{
  double res = 0.0;
  for (int i = 0; i < len; i++)
    res += array[i];
  return res / len;
}

int dot_product(int array1[], int array2[], int len)
{
  int res = 0;
  for (int i = 0; i < len; i++)
  {
    res += array1[i] * array2[i];
  }
  return res;
}

int main()
{
  int len_array = 8;
  double array[] = {3.1, 5.6, 6.0, 7.8, 0.2, 9.5, 4.0, 8.0};
  cout.precision(4);
  cout << "max: " << maximum(array, len_array) << endl;
  cout << "min: " << minimum(array, len_array) << endl;
  cout << "avg: " << average(array, len_array) << endl;
  int len_array_2 = 4;
  int array1[] = {3, 4, 8, 2};
  int array2[] = {1, 3, 2, 4};
  cout << "dot product: " << dot_product(array1, array2, len_array_2) << endl;
}
