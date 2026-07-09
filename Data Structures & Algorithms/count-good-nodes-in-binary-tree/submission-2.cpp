/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void dfs(TreeNode* root, int maxSoFar, int &ans) {
    if (!root) return;

    if (root->val >= maxSoFar) {
        ans++;
        maxSoFar = root->val;
    }

    dfs(root->left, maxSoFar, ans);
    dfs(root->right, maxSoFar, ans);
}
    int goodNodes(TreeNode* root) {
        int ans=0;
        int maxx=INT_MIN;
        dfs(root,maxx,ans);
        return ans;
        
    }
};
