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

    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode* > level;
        int current =1 , next =0 , count =0;
        level.push(root);
        while(!level.empty()) {
            TreeNode* front = level.front();
            level.pop();
            current--;
            
            if(front->right) {
                level.push(front->right);
                next++;
            }
            
            if(front->left) {
                level.push(front->left);
                next++;
            }
            
            if(!current) {
                count++;
                swap(current,next);
            }
        }
        return count;
    }
};
