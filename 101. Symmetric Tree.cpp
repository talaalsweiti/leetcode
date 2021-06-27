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
    bool helper(vector<int> level) {
        int i = level.size()/2-1;
        int j =i+1;
        while(i>-1) {
            if(level[i]!=level[j]) return false;
            i--;
            j++;
        }
        return true;
    }
    bool isSymmetric(TreeNode* t) {
 

    vector<int> level;
    queue<TreeNode *> levelTraversal;
    levelTraversal.push(t);
    int current =1 , next =0;
    
    while(!levelTraversal.empty()) {
        TreeNode * front = levelTraversal.front();
        levelTraversal.pop();
        current--;
        
        //level.push_back(front->val);
        
        if(front->left) {
            level.push_back(front->left->val);
            levelTraversal.push(front->left);
            next++;
        }
        if(!front->left) level.push_back(101);
        
        if(front->right) {
             level.push_back(front->right->val);
            levelTraversal.push(front->right);
            next++;
        }
         if(!front->right) level.push_back(101);
        if(!current) {
            if(!helper(level)) return false;
            level={};
            swap(current,next);
        }
    }
        return true;
    }
};
