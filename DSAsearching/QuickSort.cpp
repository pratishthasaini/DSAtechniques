#include<bits/stdc++.h>
using namespace std;
int ans(int arr[], int low, int high){

    int p = arr[high];
    int i = low-1;
   
    for(int j = low; j < high; j++){
        if(arr[j] < p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void quickSort(int arr[], int low, int high){
if (low < high) {
 
        int pi = ans(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
    int n;
    cout << "Write the size of n : ";
    cin >> n;
    int a[n];
    cout << "Unsorted array : ";
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    quickSort(a, 0, n-1 );
     cout << "Sorted array : ";
    for(int i = 0; i < n ; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
