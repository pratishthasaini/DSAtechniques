#include <stdio.h>

int binarySearch(int arr[], int low, int high, int element)
{
  //high and low are not the values they are index number.
  if (high >= low)
  {
    int mid = (high + low) / 2;

    if (arr[mid] == element)
      return mid;

    if (arr[mid] > element)
      return binarySearch(arr, low, mid - 1, element);
    // it will return the right half
    return binarySearch(arr, mid + 1, high, element);
  }
  return -1;
}

int main()
{
  int arr[] = {20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int element = 50;
  int result = binarySearch(arr, 0, n - 1, element);
  (result == -1)
      ? printf("The element is not present in the array")
      : printf("the element is present at index:%d", result);
  return 0;
}
