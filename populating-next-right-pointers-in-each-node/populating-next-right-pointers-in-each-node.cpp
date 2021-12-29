/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*>q;
        int current =1 , next =0;
        Node* ans = root;
        q.push(root);
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            current--;
            if(current)
            front->next = q.front();
            else front->next =nullptr;
            if(front->left){
                q.push(front->left);
                next++;
            } 
            if(front->right){
                q.push(front->right);
                next++;
            }
            if(!current){
                swap(next,current);
            }
        }
        return ans;
    }
};