class MinStack {
public:
    stack<int> s;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(minStack.empty() || val <= getMin()) minStack.push(val);
    }
    
    void pop() {
        if(s.top()== getMin())minStack.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */