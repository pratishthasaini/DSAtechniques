class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> countChars;
        for(auto e:chars){
           countChars[e]++;
        }
        int ans = 0;
        for(auto word: words){
            unordered_map<char, int> countWords;
            for(auto e: word){
                countWords[e]++;
            }
            bool good = true;
            for(auto e:word){
                if(countChars[e] < countWords[e]){
                    good = false;
                    break;
                }
            }
            if(good){
            ans += word.size();
            }
        }
        return ans;
    }
};
