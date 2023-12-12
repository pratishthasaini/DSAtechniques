class Solution {
public:
    bool ans = false;
    void bfs(TreeNode* root, int targetSum, int currentSum){
        if(!root) return;
        currentSum += root->val;
        if(currentSum == targetSum && !root->left && !root->right){
            ans = true;
            return;
        }
        bfs(root->left, targetSum, currentSum);
        bfs(root->right, targetSum, currentSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bfs(root, targetSum, 0);
        return ans;
    }
};
