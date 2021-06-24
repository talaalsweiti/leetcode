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
    vector<vector<int>> zigzagLevelOrder(TreeNode* t) {
    vector<vector<int>> ans ;
    if(!t) return ans;
    vector<int> level;
    queue<TreeNode *> levelTraversal;
    levelTraversal.push(t);
    int current =1 , next =0;
    int zigZag =0;
    while(!levelTraversal.empty()) {
        TreeNode * front = levelTraversal.front();
        levelTraversal.pop();
        current--;
        level.push_back(front->val);   
        if(front->right) {
            levelTraversal.push(front->right);
            next++;
        }
        if(front->left) {
            levelTraversal.push(front->left);
            next++;
        }
        
        if(!current) {
            zigZag++;
            if(zigZag%2!=0) reverse(level.begin(),level.end());
            ans.push_back(level);
            level={};
            swap(current,next);
            
        }
        
        
    } 
    return ans; 
    }
};
