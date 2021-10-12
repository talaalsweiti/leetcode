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
    void dfs(TreeNode* root,int& ans,int currentMax){
        if(!root) return ;
        if(root->val>=currentMax) ans++;
        currentMax = max(currentMax,root->val);
        dfs(root->right,ans,currentMax);
        dfs(root->left,ans,currentMax);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0 ;
        dfs(root,ans,root->val);
        return ans;
    }
};
