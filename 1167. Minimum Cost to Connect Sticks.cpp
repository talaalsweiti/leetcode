class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int,vector<int>,greater<int>> minHeap;
        int sum  =0 ;
        for(int num : sticks) {
             minHeap.push(num);
        }
        int n= sticks.size();
        n/=2;
        n = sticks.size()%2 ? n+1 : n; 
        while(minHeap.size()>1) {
            int top = minHeap.top(); //4
            minHeap.pop();
            int top2 =minHeap.top(); 
            sum+=top2+top; //4+4+5
            minHeap.pop();
            minHeap.push(top2+top);
            
        }
      
        return sum;
    }
};

/*
4
5
8

1
*/
