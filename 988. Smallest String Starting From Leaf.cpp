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
  
    string min_str = "~";
    char letter(int charac) {
        string str  = "abcdefghijklmnopqrstuvwxyz";
        return str[charac];
    }
    void helper(TreeNode* t , string path) {
    if(t!=NULL) {
        char c= letter(t->val);
        string s(1, c);
        path+=s; 
        if(!t->left&&!t->right) {
            reverse(path.begin(),path.end());
            if(path<min_str) {
               cout << path << endl ;
                min_str = path;
            
            }
            path = "";
        
        }
        helper(t->left,path);
        helper(t->right,path);
    }

    }
    string smallestFromLeaf(TreeNode* root) {
        helper(root,"");

        return min_str;
    }
};
