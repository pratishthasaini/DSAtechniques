#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
  for(int i = 0; i < n-1; i++){
    for(int j = 0 ; j < n-1-i; j++)
    {
      if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
    }  
  }
}
int main(){
  int arr[5]={7,9,4,5,1};
  cout << "Unsorted array : ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  int n = sizeof(arr)/sizeof(arr[0]); 
  // applying bubble sort
  bubbleSort(arr, n);
  cout << "Sorted array : ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
// worst case time complexity - O(N^2)
// if array is already sorted - O(N)
