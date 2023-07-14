#include<iostream>
using namespace std;
void sort(int arr[], int n){
      int i, key, j;
      for(int i = 1; i < n; i++){
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1]=key;
      }
}

int main(){
    int arr[5] = {12,11,13,5,6};
    cout<<"Before sorting: ";
    for (int i=0 ; i<=4 ; ++i){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    //calling the function to perform insertion sort on array elements.
    sort(arr, sizeof(arr)/sizeof(*arr));
    cout<<"After Sorting :";
    for (int i=0 ; i<=4 ; ++i) cout <<arr[i]<<" ";
    cout<< endl;
    return 0;

}
