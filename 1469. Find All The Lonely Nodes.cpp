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
    vector<int> getLonelyNodes(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        while(!q.empty()) {
            TreeNode* front = q.front();
            q.pop();
            if(front->right) {
                q.push(front->right);
                if(!front->left) {
                    ans.push_back(front->right->val);
                }
            }
            if(front->left) {
                q.push(front->left);
                if(!front->right) {
                    ans.push_back(front->left->val);
                }
            }
        }
        return ans;
    }
};
