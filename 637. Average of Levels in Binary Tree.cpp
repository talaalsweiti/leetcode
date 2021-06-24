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
    vector<double> averageOfLevels(TreeNode* t) {
    vector<double> ans ;
    if(!t) return ans;
    double avg = 0;
    int count = 0;
    queue<TreeNode *> levelTraversal;
    levelTraversal.push(t);
    int current =1 , next =0;
    while(!levelTraversal.empty()) {
        TreeNode * front = levelTraversal.front();
        levelTraversal.pop();
        count++;
        current--;
        avg+=front->val;
        if(front->left) {
            levelTraversal.push(front->left);
            next++;
        }
        
        if(front->right) {
            levelTraversal.push(front->right);
            next++;
        }
        
        if(!current) {
            ans.push_back(avg/count);
            avg = 0;
            count=0;
            swap(current,next);
        }
    } 
    return ans;  

    }
};
