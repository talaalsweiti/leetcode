class Solution {
public:
    int binarySearch( const vector<int> shiftArr,int low , int high , int num) {
    int mid;
   while(low<high) {
     mid = low + (high-low)/2;
     if(shiftArr[mid]==num) {
        return mid;
     } 
     else  if(shiftArr[mid]<num) low = mid+1;
     else high = mid;  
  }
  return -1;
}
    int search(vector<int>& shiftArr, int num) {
    int low =0 , high = shiftArr.size()-1;
    int mid = low + (high-low)/2;
    while(low<high) {
     mid = low + (high-low)/2;
     if(shiftArr[mid]>shiftArr[high]) {
        low = mid+1;;
     } 
      else high = mid;  
  }
  
  int ans = binarySearch(shiftArr,0,low,num);
  if(ans==-1) ans = binarySearch(shiftArr,low,shiftArr.size(),num);

  return ans;
    }
};
