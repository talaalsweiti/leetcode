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
    bool isEvenOddTree(TreeNode* root) {
        int level =0;
        queue<TreeNode*> q;
        q.push(root);
        int current = 1 , next =0 ;
        int prev = INT_MIN;
        while(!q.empty()){
            TreeNode* front =q.front();
            q.pop();
            current--;
            if(level%2==0){
                if(prev >= front->val || front->val%2==0) return false;
            }else{
                 if(prev <= front->val|| front->val%2!=0) return false;
            }
            if(front->left){
                q.push(front->left);
                next++;
            }
             if(front->right){
                q.push(front->right);
                 next++;
            }
            prev = front->val;
            if(!current){
                swap(next,current);
                level++;
                if(level%2==0){
                   prev = INT_MIN; 
                }else{
                    prev = INT_MAX;
                }
            }
        }
        
        return true;
        
    }
};