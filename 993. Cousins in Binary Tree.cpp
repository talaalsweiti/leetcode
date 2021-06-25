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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> nodes;
        vector<TreeNode*> levels;
        nodes.push(root);
        int current = 1 , next = 0;
        
        while(!nodes.empty()) {
            TreeNode* front = nodes.front();
            bool result = false;
            nodes.pop();
            current--;
            levels.push_back(front);
            if(front->right) {
                nodes.push(front->right);
                next++;
            }
            if(front->left) {
                nodes.push(front->left);
                next++;
            }
            if(!current) {
                for(int i=0;i<levels.size();i++) {
                    bool flg1 = false , flg2 = false ;
                    if(levels[i]->right) {
                        if(levels[i]->right->val==x || levels[i]->right->val==y) flg1=true;
                    }
                     if(levels[i]->left) {
                        if(levels[i]->left->val==x || levels[i]->left->val==y) flg2=true;
                    }
                    //if they have the same parent 
                    if(flg1&&flg2) return false;
                    
                    //if we found both values at the same level and have diffrent parents  
                    if(flg1&&result || flg2&&result) return true;
                    
                    //if we found one of the values 
                    if(flg1||flg2) result=true;
                }
                levels = {};
                swap(current,next);
            }
        }
        return false;
    }
};
