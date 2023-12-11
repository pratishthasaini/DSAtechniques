class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        int sum1 = 0;
        int sum2 = 0;
        for(auto e: nums1){
            m1[e]++;
        }
        for(auto e: nums2){
            m2[e]++;
        }
        for(auto e: m1){
            if(m2[e.first] != 0){
                sum1+=m1[e.first];
            }
        }
        for(auto e: m2){
            if(m1[e.first] != 0){
                sum2+=m2[e.first];
            }
        }
        ans.push_back(sum1);
        ans.push_back(sum2);
        return ans;
    }
};
