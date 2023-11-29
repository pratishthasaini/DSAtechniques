class Solution {
public:
    int hammingWeight(uint32_t n) {
        //formula to calculate hamming weight
        int count = __builtin_popcount(n);
        return count;
    }
};
