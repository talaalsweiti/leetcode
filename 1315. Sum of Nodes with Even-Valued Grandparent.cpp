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
    int checkGrands(TreeNode* t) {
    int sum =0;

    if(t->left) {
        
        TreeNode * temp = t->left;
        if(temp->left) {
            sum+=temp->left->val;
        }
        if(temp->right) {
            sum+=temp->right->val;
        }

    }
    if(t->right) {
        TreeNode * temp = t->right;
        if(temp->left) {
            sum+=temp->left->val;
        }
        if(temp->right) {
            sum+=temp->right->val;
        }

    }
        return sum;
    }
    int sumEvenGrandparent(TreeNode* t) {
    int sum =0;
    queue<TreeNode *> levelTraversal;
    levelTraversal.push(t);
    int current =1 , next =0;

    while(!levelTraversal.empty()) {
        TreeNode * front = levelTraversal.front();
        levelTraversal.pop();
        if(front->val%2==0)
        sum+=checkGrands(front);
        current--;
        if(front->left) {
            levelTraversal.push(front->left);
            next++;
        }
        
        if(front->right) {
            levelTraversal.push(front->right);
            next++;
        }
        if(!current) {
            swap(current,next);
        }
    }
    return sum;
    }
};
