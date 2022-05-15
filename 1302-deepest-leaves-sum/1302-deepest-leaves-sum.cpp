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
    int deepestLeavesSum(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        int current =1 , next=0;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            current--;
            ans+=front->val;
            if(front->right){
                q.push(front->right);
                next++;
            }
            if(front->left){
                q.push(front->left);
                next++;
            }
            if(next){
                ans=0;
            }
            if(!current){
                swap(next,current);
                
            }
            
        }
        return ans;
    }
};