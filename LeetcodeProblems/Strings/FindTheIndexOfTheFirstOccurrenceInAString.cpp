class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = haystack.find(needle);
        if(haystack.find(needle) != std::string::npos){
            return ans;
        }
        return -1;
    }
};
// this is the most efficient way with 100% beats
/*
Problem :-
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/
