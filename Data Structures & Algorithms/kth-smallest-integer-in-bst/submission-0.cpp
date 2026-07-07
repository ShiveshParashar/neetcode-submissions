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
    void dfs(TreeNode*root,priority_queue<int,vector<int>,greater<int>>&pq){
            if(!root) return ;
            pq.push(root->val);
            dfs(root->left,pq);
            dfs(root->right,pq);
    }
    int kthSmallest(TreeNode* root, int k) {
        int answer=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        dfs(root,pq);
        while(k--){
            auto x=pq.top();
            answer=x;
            pq.pop();

        }
        return answer;
        
    }
};
