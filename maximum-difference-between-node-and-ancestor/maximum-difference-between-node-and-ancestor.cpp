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
//first soluation : calcualte the value for each node (consider each nose as root)
//not efficent 
class Solution {
public:
    void helper(TreeNode* parent,TreeNode* node,int& maxDiff) {
        if(!node) return;
        maxDiff = max(abs(parent->val-node->val),maxDiff);
        helper(parent,node->left,maxDiff);
        helper(parent,node->right,maxDiff);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans =0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            helper(front,front,ans);
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        return ans;
    }
};

//second slouation
class Solution {
public:
    void helper(TreeNode* parent,int maxValue,int minValue,int& maxDiff) {
        if(!parent) return;
        maxDiff = max((max(abs(maxValue-parent->val),abs(minValue-parent->val))),maxDiff);
        helper(parent->left,max(maxValue,parent->val),min(minValue,parent->val),maxDiff);
        helper(parent->right,max(maxValue,parent->val),min(minValue,parent->val),maxDiff);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans =0;
       helper(root,root->val,root->val,ans);
        return ans;
    }
};
