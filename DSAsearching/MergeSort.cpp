#include<iostream>
using namespace  std;

template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
void merge(int a[],int low, int mid, int high){
    int b[high+1];
    int i = low; int j = mid+1; int k = low;
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    for(;i<=mid;i++){
        b[k++] = a[i++];
    }
    for(;j<=high;j++){
        b[k++] = a[j++];
    }
    for (int l = low; l <= high; l++) {
        a[l]=b[l];
    }
}
void MergeSort(int a[], int low, int high){

    if(low < high) {
        int mid = low + (high-low)/2;

        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}
int main(){
    int arr[8]={2,5,6,7,1,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,n-1);
    Print(arr, n-1, "Sorted A");
    return 0;
}

