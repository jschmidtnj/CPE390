#include <iostream>
#include <sstream>

using namespace std;

extern int addRange(int start, int end);

extern int factorial(int n);

void swap(int arr[], int index1, int index2)
{
  int temp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = temp;
}

/**
 * sorts in decreasing order
 * uses selection sort
 */
void reverseSort(int arr[], int len) {
  for (int i = 0; i < len; i++)
  {
    int max_index = i;
    for (int j = i; j < len; j++)
      if (arr[j] > arr[max_index])
        max_index = j; 
    swap(arr, i, max_index);
  }
}

void printArray(int arr[], int len)
{
  cout << '[';
  if (len > 0)
  {
    cout << arr[0];
    for (int i = 1; i < len; i++)
      cout << ", " << arr[i];
  }
  cout << ']';
}

int numRequiredArgs = 4;

int main(const int argc, char * const argv[]) {
  if (argc != numRequiredArgs)
  {
    cerr << "num args must be " << numRequiredArgs << endl;
    return -1;
  }
  int rangeLow;
  istringstream iss;
  iss.str(argv[1]);
  if (!(iss >> rangeLow))
  {
    cerr << "invalid range low input" << endl;
    return -1;
  }
  iss.clear();
  iss.str(argv[2]);
  int rangeHigh;
  if (!(iss >> rangeHigh))
  {
    cerr << "invalid range high input" << endl;
    return -1;
  }
  cout << "add range (" << argv[1] << ", " << argv[2] << "): " << addRange(rangeLow, rangeHigh) << endl;
  iss.clear();
  iss.str(argv[3]);
  int factorialInput;
  if (!(iss >> factorialInput) || factorialInput < 0)
  {
    cerr << "invalid factorial input" << endl;
    return -1;
  }
  cout << argv[3] << "!: " << factorial(factorialInput) << endl;
  int size = 5;
  int * arr = new int[size];
  arr[0] = 2;
  arr[1] = 6;
  arr[2] = 1;
  arr[3] = 8;
  arr[4] = 5;
  reverseSort(arr, size);
  cout << "reverse sorted array: ";
  printArray(arr, size);
  cout << endl;
  delete[] arr;
}

