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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans ; 
        stack<TreeNode*> st;
        TreeNode* current = root;
        while(current || !st.empty()){
            while(current){
                st.push(current);
                current=current->left;
            }
            current = st.top();
            st.pop();
            ans.push_back(current->val);
            current = current->right;
            
        }
        return ans; 
    }
};
/*

Inorder = left, root , right
preorder = root, left, right
postorder = left, right, root


[1,4,2,3]
        1
    4       2
3

[3,4,1,2]


*/