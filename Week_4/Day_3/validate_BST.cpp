class Solution {
public:
    bool isValidBST(TreeNode* root, long long low = LLONG_MIN,
                 long long high = LLONG_MAX) {

        if (!root) return true;

        if (root->val <= low || root->val >= high)
            return false;

        return isValidBST(root->left, low, root->val) &&
               isValidBST(root->right, root->val, high);
    }
};