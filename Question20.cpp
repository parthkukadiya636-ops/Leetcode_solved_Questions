class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }

    int dfsHeight(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int lH = dfsHeight(root->left);
        int rH = dfsHeight(root->right);

        if(lH == -1 || rH == -1){
            return -1;
        }

        if(abs((lH - rH))>1){
            return -1;
        }

        return 1 + max(lH , rH);
    }
};