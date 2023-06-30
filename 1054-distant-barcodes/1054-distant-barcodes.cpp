class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        priority_queue<pair<int,int>> pq;
        vector<int>ans;
        map<int,int>cnt;
        for(int barcode:barcodes){
            cnt[barcode]++;
        }
        for(auto &x:cnt){
            pq.push({x.second,x.first});
        }
        int prev = -1;
        while(pq.size()){
            pair<int,int> top = pq.top();
            pq.pop();
            if(top.second!=prev){
                ans.push_back(top.second);
                top.first--;
                if(top.first){
                    pq.push(top);
                }
                 prev=top.second;
            }else{
                 pair<int,int> top2 = pq.top();
                pq.pop();
                 pq.push(top);
                 ans.push_back(top2.second);
                top2.first--;
                if(top2.first){
                    pq.push(top2);
                }
                prev=top2.second;
            }
            
        }
        return ans;
    }
};

/*

[1,1,1,1,2,2,3,3]
1 = 4
2 = 2
3 = 2



*/