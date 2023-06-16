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
    int maxLevelSum(TreeNode* root) {
        int level = 1 , ans= 0; 
        queue<TreeNode*> q;
        q.push(root);
        int current=1,next=0,sum=0, maxSum = INT_MIN;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            sum+=front->val;
            current--;
            if(front->left){
                q.push(front->left);
                next++;
            }
            if(front->right){
                q.push(front->right);
                next++;
            }
            if(!current){
                swap(current,next);
                if(sum>maxSum){
                    maxSum=sum;
                    ans=level;
                }
                sum=0;
                level++;
            }
        }
        return ans;
    }
};