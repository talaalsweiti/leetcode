class Solution {
public:
    int minPartitions(string n) {
        int max = -1 ;
        for(int i=0;i<n.length();i++) {
            int x = n[i] - '0';
            if(x>max)
                max =x;
            if(max==9)
                break;
        }
        return max;
    }
};
