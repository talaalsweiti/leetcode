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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1) {
            return new TreeNode(val,root,nullptr);
        }
        TreeNode* ptr = root;
        queue<TreeNode*> q;
        int current = 1 , next = 0 , level = 2;
        q.push(ptr);
        while(!q.empty()) {
            TreeNode* front = q.front();
            q.pop();
            current--;
            if(level==depth) {
                TreeNode* frontLeft = front->left;
                TreeNode* frontRight= front->right;
                TreeNode* newLeft =  new TreeNode(val,frontLeft,nullptr);
                TreeNode* newRight =  new TreeNode(val,nullptr,frontRight);
                front->left =newLeft;
                front->right =newRight;
                    
            }
            if(level>depth) return root;
            if(front->left&&level<depth){
               q.push(front->left);
                next++;
            }
            if(front->right&&level<depth) {
                q.push(front->right);
                next++;
            }
            if(!current) {
                swap(current,next);
                level++;
            }
                        
        }
        return root;
    }
};
