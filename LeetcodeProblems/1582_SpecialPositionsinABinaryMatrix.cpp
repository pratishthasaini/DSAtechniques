class Solution {
public:
    bool trueCon(vector<vector<int>>& mat, int i , int j, int n, int m){
        bool flag = true;;
        for(int row = 0; row < n; row++){
            if(mat[row][j] != 0 && row != i){
                flag = false;
            }
        }
        for(int col = 0; col < m; col++){
            if(mat[i][col] != 0 && col != j){
                flag = false;
            }
        }
        // cout << flag << endl;
        return flag;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int special = 0;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1){
                    if(trueCon(mat, i , j, n, m)){
                        special++;
                    }
                }
            }
        }
        return special;
    }
};
