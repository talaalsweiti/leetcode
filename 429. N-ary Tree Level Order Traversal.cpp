/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* t) {
    vector<vector<int>> ans ;
    if(!t) return ans;
    vector<int> level;
    queue<Node *> levelTraversal;
    levelTraversal.push(t);
    int current =1 , next =0;
    
    while(!levelTraversal.empty()) {
        Node * front = levelTraversal.front();
        levelTraversal.pop();
        current--;
        level.push_back(front->val);
        for (auto n : front -> children) {
             levelTraversal.push(n);
             next++;
        }
        
        if(!current) {
            ans.push_back(level);
            level={};
            swap(current,next);
        }
    } 
        return ans;
    }
};
