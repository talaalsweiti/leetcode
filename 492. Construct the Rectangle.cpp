class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res(2,0);
     int min = 1e7+5;    
        for(int i=1;i*i<=area;i++) {
            vector<int>temp;
            if(area%i==0) {
            int diff= abs(i - (area/i));
            if(diff<min) {
            min=diff;
            res[0]=i;
            res[1]=area/i;
        }
                
     }
 }

    sort(res.rbegin(),res.rend());
        return res;
    }
};
