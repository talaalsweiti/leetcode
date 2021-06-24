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
    
    vector<int> ans;
    void printInOrder(TreeNode* root){
    if(root!= NULL){
       printInOrder(root->left);
       ans.push_back(root->val);
       printInOrder(root->right);
    }
} 
    vector<int> inorderTraversal(TreeNode* root) {
    
        printInOrder(root);
        return ans;
    }
};



class Solution {
public: 
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
       
        stack<TreeNode *> nodes;
        nodes.push(root);
        while(!nodes.empty()) {
            TreeNode *pNode = nodes.top();
            if(pNode->left)
            {
                nodes.push(pNode->left);
                pNode->left = NULL;
            }
            else
            {
                ans.push_back(pNode->val);
                nodes.pop();
                if(pNode->right)
                nodes.push(pNode->right);
            }
        }
        return ans;
    }
};
