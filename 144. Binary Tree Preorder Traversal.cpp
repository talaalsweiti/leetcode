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
      vector<int> result;
     vector<int> preorderTraversal(TreeNode* root) {
       if(root!=NULL) {
        result.push_back(root ->val);
        result = preorderTraversal(root->left);
        result = preorderTraversal(root->right); 
      }
        return result;
    }
};
