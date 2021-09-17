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
    int longestPath(TreeNode* root,int parent,int pathSoFar){
        if(!root) return pathSoFar;
        int current = (root->val==parent+1) ? pathSoFar+1 : 1;
        int maximum  = current;
        maximum=max(longestPath(root->left,root->val,current), maximum);
        maximum=max(longestPath(root->right,root->val,current), maximum);
        return maximum;
    }
    int longestConsecutive(TreeNode* root) {
        return longestPath(root,INT_MIN,0);
    }
};
