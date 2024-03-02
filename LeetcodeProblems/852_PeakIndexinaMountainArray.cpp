class Solution {
public:
    int helper(vector<int>& arr, int start, int end){
        int mid = start + (end-start)/2;
        if(start == end) return mid;
        if(arr[mid] >= arr[mid+1]) return helper(arr, start, mid);
        else if(arr[mid] < arr[mid+1]) return helper(arr, mid+1, end);
        //if no case exists
        return -1;
    }
    
    int peakIndexInMountainArray(vector<int>& arr) {
       int n = arr.size();
       int ans = helper(arr, 0, n-1);
       return ans;
    }
};
