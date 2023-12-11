class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        int ans = -1;
        int max = 0;
        for(auto e: mp){
            if(e.second >= max){
                max = e.second;
                ans = e.first;
            }
        }
        return ans;
    }
};
