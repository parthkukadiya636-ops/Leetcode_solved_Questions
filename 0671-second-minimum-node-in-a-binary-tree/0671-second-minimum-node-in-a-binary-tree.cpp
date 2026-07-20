 
class Solution {
public:
    int minVal;

    int dfs(TreeNode* root) {
        if (root == NULL)
            return -1;

        if (root->val > minVal)
            return root->val;

        int left = dfs(root->left);
        int right = dfs(root->right);

        if (left == -1)
            return right;
        if (right == -1)
            return left;

        return min(left, right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        minVal = root->val;
        return dfs(root);
    }
};