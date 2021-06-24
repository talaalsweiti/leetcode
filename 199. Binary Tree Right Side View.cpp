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
        vector<int> ans , level;
        if(!root) return ans;
        queue<TreeNode *> levelTraversal;
        levelTraversal.push(root);
        int current =1 , next =0;
        while(!levelTraversal.empty()) {
            TreeNode* front = levelTraversal.front();
            levelTraversal.pop();

            level.push_back(front->val);
            current--;
            if(front->right) {
                levelTraversal.push(front->right);
                next++;
            }
            if(front->left) {
                levelTraversal.push(front->left);
                next++;
            }

            if(!current) {
                ans.push_back(level[0]);
                level = {};
                swap(current,next);
            }
        } 
    return ans;   
    }
};
