class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int level = 0;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> v;
            for (int i = 0; i < size; i++)
            {
                TreeNode *frontVal = q.front();
                q.pop();
                v.push_back(frontVal->val);
                if (frontVal->left)
                    q.push(frontVal->left);
                if (frontVal->right)
                    q.push(frontVal->right);
            }
            //even level odd number
            if(v.size() == 1){
                if(level % 2 == 0 && v[0] % 2 == 0){
                    return false;
                }
                else if(level % 2 == 1 && v[0] % 2 == 1){
                    return false;
                }
            }
            else if (level % 2 == 0)
            {
                for (int i = 0; i < v.size() - 1; i++)
                {
                    if (v[i] % 2 == 0 || v[i+1] % 2 == 0 || v[i] >= v[i + 1])
                    {
                        return false;
                    }
                }
            }
            else
            {
                for (int i = 0; i < v.size() - 1; i++)
                {
                    if (v[i] % 2 == 1 || v[i+1] % 2 == 1 || v[i] <= v[i + 1])
                    {
                        return false;
                    }
                }
            }
            level++;
        }
        return true;
    }
};
