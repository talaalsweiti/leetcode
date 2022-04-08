class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> numbers;
    int index;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            numbers.push(nums[i]);
             if(numbers.size()>k){
                numbers.pop();
            }
        }
       
        index=k;
    }
    
    int add(int val) {
     numbers.push(val);
     if(numbers.size()>index){
                numbers.pop();
        }  
     return numbers.top();   
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
/*
[4, 5, 8, 2]],

 2   3     4   5 8
8 5 4 3 2


*/