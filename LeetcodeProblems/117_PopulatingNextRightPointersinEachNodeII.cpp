class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                Node* frontvar = q.front();
                q.pop();
                if(i == size-1) frontvar->next = NULL;
                else frontvar->next = q.front();
                if(frontvar->left) q.push(frontvar->left);
                if(frontvar->right) q.push(frontvar->right);
            }
        }
        return root;
    }
};
