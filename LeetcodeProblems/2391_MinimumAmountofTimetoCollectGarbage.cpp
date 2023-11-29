class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int> pre(travel.size()+1);
        pre[0] = 0;
        for(int i = 1; i <= travel.size(); i++){
        pre[i] = pre[i-1]+travel[i-1];
        }
        unordered_map<char, int> last;
         for(int i = 0; i < garbage.size(); i++){
            for(int j = 0; j < garbage[i].size(); j++){
               if(garbage[i][j] == 'M'){
                   last['M'] = i;
               }
               else if(garbage[i][j] == 'P'){
                   last['P'] = i;
               }
               else{
                   last['G'] = i;
               }
            }           
        }
        int count  = 0;
        for(int i = 0; i < garbage.size(); i++){
            count += garbage[i].size();
        }
        for(auto e: last){
            count += pre[e.second];
        }
        return count;
    }
};
