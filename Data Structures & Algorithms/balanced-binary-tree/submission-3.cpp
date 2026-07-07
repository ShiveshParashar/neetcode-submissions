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
    int height(TreeNode * root){
        if(!root) return 0;
        int l=height(root->left);
        int r=height(root->right);
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int t=height(root->left);
        int t2=height(root->right);
        if(abs(t-t2)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);

        
    }
};
