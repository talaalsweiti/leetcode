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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        if(root->left!=NULL&&root->right!=NULL) {
            TreeNode* left  = root->left;
            TreeNode* right = root->right;
            root->right = left;
            root->left = right;
            invertTree(root->left);
            invertTree(root->right);
        }
        else if(root->left!=NULL&&root->right==NULL) {
            root->right = root->left;
            root->left = NULL;
            invertTree(root->right);
        }
        else if(root->left==NULL&&root->right!=NULL) {
            root->left = root->right;
            root->right = NULL;
            invertTree(root->left);
        }
        return root;
    }
};
