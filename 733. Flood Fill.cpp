class Solution {
public:

    void helper(int i , int j,vector<vector<int>>& grid,int newColor,int num) {
        grid[i][j]=newColor;
        int dx[4] =  {1,-1,0,0};
        int dy[4] = { 0,0,1,-1};
        for(int r =0;r<4;r++){
            if(check(i+dx[r],j+dy[r],grid,num)) helper(i+dx[r] , j+dy[r],grid , newColor,num);
        }
    }
    
    bool check(int i , int j,vector<vector<int>>& grid,int num){
        if(i<0|| i>grid.size()-1) return false;
        if(j<0|| j>grid[0].size()-1) return false;
        if(grid[i][j]!=num) return false;
        return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int num = image[sr][sc];
        if(num!=newColor)
        helper(sr, sc,image,newColor,num);
        return image;
     
    }
};
