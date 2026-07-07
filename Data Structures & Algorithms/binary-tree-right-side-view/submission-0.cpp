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
    vector<int> rightSideView(TreeNode* root) {
         vector<int>answer;
        if(!root) return answer;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int temp;
            for(int i=0;i<s;i++){
                auto x=q.front();
                q.pop();
                temp=x->val;
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
            answer.push_back(temp);
        }
        return answer;
        
    }
};
