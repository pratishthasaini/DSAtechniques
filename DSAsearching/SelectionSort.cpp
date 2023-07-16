#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    int min;
    for(int i = 0; i < n-1; i++){
//initializing 1st index as minimun index
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
              // finding the index of smallest element
                min = j;
            }          
        }
        if(min != i){
                swap(arr[min] , arr[i]);
         }
    }    
}
int main(){
    int arr[5] = {7,5,9,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }   
    cout << endl;
    //Selection Sort Algorithm Implementation
    selectionSort(arr, n);
    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }   
    cout << endl;
     return 0;
}
