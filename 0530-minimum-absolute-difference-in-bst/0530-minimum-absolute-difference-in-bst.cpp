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
    void storeNodes(vector<int>& inorderNodes ,TreeNode* root){
        if(!root) return;
        storeNodes(inorderNodes,root->left);
        inorderNodes.push_back(root->val);
        storeNodes(inorderNodes,root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>inorderNodes ;
        storeNodes(inorderNodes,root); 
        int minDiff= INT_MAX;
        for(int i=1;i<inorderNodes.size();i++){
            minDiff = min(minDiff,inorderNodes[i]-inorderNodes[i-1]);
        }
        return minDiff;
    }
};