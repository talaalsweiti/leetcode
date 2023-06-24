class Solution {
public:
    int fillCups(vector<int>& amount) {
        int ans = 0;
        priority_queue<int> pq;
        for(int num:amount){
            if(num>0) pq.push(num);
        }
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            top--;
            if(pq.size()){
                int temp = pq.top();
                pq.pop();
                temp--;
                if(temp>0)
                pq.push(temp);
            }
            if(top>0)
            pq.push(top);
            ans++;
        }
        return ans;
    }
};

/*


amount = [1,4,2]
cold,warm,hot
0,3,2
0,2,1
0,1,0

1,2,4


5,4,4
4,3,4
3,3,3
2,3,2
1,2,2
1,1,1
0,0,1
1
*/