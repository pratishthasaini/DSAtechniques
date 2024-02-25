class Solution {
public:
    
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int count = 0;
   
        for(int i = 0; i < words.size(); i++){
            int j = i+1;
            while(j < words.size()){
                    int s = words[i].length();
                    int m = words[j].length();
                    if(s <= m){
                    if(words[i] == words[j].substr(0,s) && words[i] == words[j].substr((m-s), s)){
                        count++;
                    }}
              j++;  
            } 
        }
        return count;
    }
};
