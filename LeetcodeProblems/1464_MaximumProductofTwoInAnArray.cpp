class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto e: nums){
            pq.push(e);
        }
        int i = pq.top();
        pq.pop();
        return (i-1)*(pq.top() - 1);
    }
};
