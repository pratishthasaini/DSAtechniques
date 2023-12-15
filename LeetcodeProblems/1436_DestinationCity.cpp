class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string ans = "";
        set<string> mySet;
        for(const auto& path : paths){
            mySet.insert(path[0]);
        }
        for(const auto& path : paths){
            if(mySet.find(path[1]) == mySet.end()){
                return path[1];
            }
        }
        return ans;
    }
};
