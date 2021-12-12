class Solution {
public:
    // bool ans = false;
    bool findWords(int i,int j,map<pair<int,int>,bool>&visited,vector<vector<char>>& board,string word,int index) {
        if(i<0 || i>= board.size()) return false;
        if(j<0 || j>= board[0].size()) return false;
        if(index>=word.size() ||board[i][j]!=word[index] || visited[{i,j}]) return false;
        
        if(word.size()-1==index) {
            return true;
        }
        visited[{i,j}] = true;
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        bool ans = false;
        for(int k=0;k<4;k++) {
            ans|=findWords(i+dx[k],j+dy[k],visited,board,word,index+1);
        }
        visited[{i,j}] = false;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
         map<pair<int,int>,bool>visited;
        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[0].size();j++) {
                    if(findWords(i,j,visited,board,word,0)) return true;
            }
        }
        return false;
    }
};
