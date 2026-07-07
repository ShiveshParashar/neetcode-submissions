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
    bool issame(TreeNode*root1,TreeNode* root2){
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        if(root1->val!=root2->val){
            return false;
        }
        return issame(root1->left,root2->left) && issame(root1->right,root2->right);

    }
    void dfs(TreeNode* root,int target,TreeNode* subRoot,int &flag){
        if(!root) return ;
        if(root->val==target) {
            if(issame(root,subRoot)){
                flag=1;
            }
            }
        dfs(root->left,target,subRoot,flag);
        dfs(root->right,target,subRoot,flag);
        
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        int flag=0;
        dfs(root,subRoot->val,subRoot,flag);
        return flag;

        
        
    }
};
