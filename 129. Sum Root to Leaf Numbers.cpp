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
   int answer = 0;
    void helper(TreeNode* t , string path) {
        if(t!=NULL) {
            path+=to_string(t->val);
            if(!t->left&&!t->right) {
                stringstream geek(path);
                int x = 0;
                geek >> x;
                answer+=x;
                path = "";
            }
            helper(t->left,path);
            helper(t->right,path);
        }

    }

    int sumNumbers(TreeNode* root) {
        helper(root,"");
        return answer;
    }
};
