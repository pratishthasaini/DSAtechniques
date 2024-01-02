class Solution
{
    public:
    int helper(int arr[], int start, int end){
        int mid = start + (end-start)/2;
        if(start == end) return mid;
        if(arr[mid] < arr[mid+1]){
           return helper(arr, mid+1, end);
        }
        else{
           return helper(arr, start, mid);
        }
    }
    
    int peakElement(int arr[], int n)
    {
      int ans = helper(arr, 0, n-1);
      return ans;
    }
};
