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
    void dfs(TreeNode * root,vector<int>&temp){
    if(!root){
        return ;
    }
    dfs(root->left,temp);
    temp.push_back(root->val);
    dfs(root->right,temp);
}
    bool isValidBST(TreeNode* root) {
         vector<int>temp;
        dfs(root,temp);
        vector<int>l;
        l=temp;
        sort(l.begin(),l.end());
        for(int i=0;i<l.size()-1;i++){
            if(l[i]==l[i+1]){
                return false;
            }
        }
        if(l==temp){
            return true;
        } 
            return false; 
    }
};
