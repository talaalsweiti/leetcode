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
    int calculateSum(TreeNode* root,unordered_map<int,int>& mp , int &maximum) {
        if(!root) return 0;
        int left = calculateSum(root->left,mp,maximum);
        int right = calculateSum(root->right,mp,maximum);
        mp[left+right+root->val]++; //calculate the sum ans increase the frequancy for it 
        maximum = max(maximum,mp[left+right+root->val]); //keep the maximum frequancy
        return left+right+root->val;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>mp;
        int maximum = 0;
        calculateSum(root,mp,maximum);
        vector<int> ans;
         for(auto x : mp ){
            if(maximum==x.second) {
                ans.push_back(x.first);
            }
         }
        return ans;
    }
};
