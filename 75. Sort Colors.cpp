class Solution {
public:
    //BUBBLE SORT
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[j]<nums[i]) {
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
};

//another solution COUNTING SORT
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using counting sort
        int count[3]={0,0,0};
        int extra[nums.size()];
        for(int i=0;i<nums.size();i++) {
            count[nums[i]]++;
            extra[i]=nums[i];
        }
        for(int i=1;i<3;i++) {
            count[i]+=count[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--) {
            nums[--count[extra[i]]] = extra[i];
        }
    }
};

////COCKTAIL SORT
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using cocktail sort
        bool isSwapped = true;
        int start =0;
        int end = nums.size();
        while(isSwapped) {
            isSwapped=false;
            for(int i=start;i<end-1;i++) {
                if(nums[i]>nums[i+1]) {
                    swap(nums[i],nums[i+1]);
                    isSwapped=true;
                }
            }
            if(!isSwapped) break;
            end--;   
            isSwapped=false;
            for(int i=end-1;i>=start;i--) {
                 if(nums[i]>nums[i+1]) {
                    swap(nums[i],nums[i+1]);
                    isSwapped=true;
                }
            }
            start++;
            
            
        }
        
    }
};
