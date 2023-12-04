class Solution {
public:
    string largestGoodInteger(string num) {
    string ans = "000";
    int count = 0;
    for(int i = 0; i < num.length()-2; i++){
        if(num[i] == num[i+1] && num[i] == num[i+2]){
             if(stoi(ans) <= stoi(num.substr(i, 3))){
                ans = num.substr(i, 3);
            }
          // this means atleast one 3-digit string is matched
            count = 1;
        }
    }
      //if count == 0 that means no 3-digit string with same value is present
    if(count == 0) return "";
    return ans;
    }
};
