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
    int longestUnivaluePath(TreeNode* root) {
        int ans =0;
        helper(root,ans);
        return ans;
    }
    void helper(TreeNode* root,int& ans) {
        if(!root) return;
        ans = max(countNodes(root->left,root->val)+countNodes(root->right,root->val),ans);
        helper(root->left,ans);
        helper(root->right,ans);
    }
    int countNodes(TreeNode* root,int val) {
        if(!root || val!=root->val){
            return 0;
        }
        return max(countNodes(root->left,val),countNodes(root->right,val)) +1;
    }
};
