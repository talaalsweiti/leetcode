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
    vector<vector<int>> answer;
      void helper(TreeNode* t ,vector<int> path,int sum,int target) {
        if(t!=NULL) {
           path.push_back(t->val);
            sum+=t->val;
            if(!t->left&&!t->right) {
                if(sum==target) {
                    answer.push_back(path);
                
                }
                sum = 0 ;
                path = {};
            }
            helper(t->left,path,sum,target);
            helper(t->right,path,sum,target);
        }

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return answer;
        helper(root,{},0,targetSum);
        return answer;
    }
};
