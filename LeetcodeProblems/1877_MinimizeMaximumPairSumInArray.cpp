class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxSum = 0;
        for(int i = 0; i < nums.size(); i++){
            maxSum = max(maxSum, (nums[i] + nums[nums.size()-i-1]));
        }
        return maxSum;
    }
};
