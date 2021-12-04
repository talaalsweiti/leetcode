/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    struct findLCM {
        TreeNode *lcm;
        bool containsP;
        bool containsQ;
    };
    findLCM helper(TreeNode* root, TreeNode* p, TreeNode* q){
        //root won't contain neither q nor q
        if(!root) {
            findLCM ans; 
            ans.lcm = nullptr;
            ans.containsP = false;
            ans.containsQ=false;
            return ans;
        }
        findLCM left = helper(root->left,p,q);
        //if both p and q are on the left
        if(left.containsP&&left.containsQ){
            return left;
        }
        findLCM right = helper(root->right,p,q);
        //if both p and q are on the right
        if(right.containsP&&right.containsQ){
            return right;
        }
        //if we reached here then the root is the ancestor for now or it will be on the left/right
        findLCM ans; 
        ans.lcm = root;
        ans.containsP = root->val==p->val || left.containsP || right.containsP ? true: false ;
        ans.containsQ = root->val==q->val || left.containsQ || right.containsQ ? true: false ;
        return ans;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     return helper(root,p,q).lcm;   
    }
};
