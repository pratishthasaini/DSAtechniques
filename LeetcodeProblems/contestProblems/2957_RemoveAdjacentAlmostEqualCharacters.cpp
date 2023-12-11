class Solution {
public:
    int removeAlmostEqualCharacters(string s) {
      int changes = 0;
      string str = s;
      int n = s.length();

    for (int i = 1; i < n; ++i) {
       if(str[i] == str[i-1]){
           changes++;
           str[i] = '#';
       }
        else if(abs(str[i] - str[i-1]) == 1){
            changes++;
            str[i] = '#';
        }
    
}
        return changes;
    }

};
