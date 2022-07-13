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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        vector<int> level;
        queue<TreeNode*> levelTraversal;
        levelTraversal.push(root);
        int next =0 , size=1;
        while(!levelTraversal.empty()){
            TreeNode* front = levelTraversal.front();
            levelTraversal.pop();
            size--;
            level.push_back(front->val);
            if(front->left){
                levelTraversal.push(front->left);
                next++;
            }
            if(front->right){
                levelTraversal.push(front->right);
                next++;
            }
            if(!size){
                swap(next,size);
                ans.push_back(level);
                level = {};
            }
        }
        return ans;
    }
};