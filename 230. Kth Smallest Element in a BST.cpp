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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode *> nodes;
        nodes.push(root);
        while(!nodes.empty()) {
            TreeNode *pNode = nodes.top();
            if(pNode->left)
            {
                nodes.push(pNode->left);
                pNode->left = NULL;
            }
            else
            {
                k--;
                if(!k) return pNode->val;
                nodes.pop();
                if(pNode->right)
                nodes.push(pNode->right);
            }
        }
        return root->val;
    }
};
