class Solution {
public:
    int rev(int n){
        int ans = 0;
        while(n > 0){
            int rem = n % 10;
            ans = ans*10 + rem;
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int count = 0;
        vector<int> store(nums.size());
        for(int i = 0; i < nums.size(); i++){
            store[i] = nums[i] - rev(nums[i]);
        }
        unordered_map<int, int> dict;
        int MOD = 1e9+7;
        for(int i = 0; i < store.size(); i++){
            count = (count+dict[store[i]]) % MOD;
            // cout << "dict " << store[i] <<endl;
            // cout << count << endl;
            dict[store[i]]++;
        }
        return count;
    }
};
