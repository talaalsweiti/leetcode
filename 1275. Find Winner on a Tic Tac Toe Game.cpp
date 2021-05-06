class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        if(moves.size()<5)return "Pending";
        int arr[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
        for(int i=0;i<moves.size()-1;i+=2) {
           arr[moves[i][0]][moves[i][1]]  = 1;
           arr[moves[i+1][0]][moves[i+1][1]]  =0;
        }
        if(moves.size()%2!=0){
            arr[moves[moves.size()-1][0]][moves[moves.size()-1][1]]  = 1;
        }
        for(int i=0;i<3;i++){
         if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2] && arr[i][0]==arr[i][2]){
             if(arr[i][0]==1) return "A";
             else if(arr[i][0]==0)  return "B";
         }   
        }
        
     for(int i=0;i<3;i++){
         if(arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i] && arr[0][i]==arr[2][i]){
             if(arr[0][i]==1) return "A";
             else if(arr[0][i]==0) return "B";
         }   
        }
        if((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[0][0]==arr[2][2]) ||(arr[2][0]==arr[1][1]&&arr[1][1]==arr[0][2]&&arr[0][2]==arr[2]      [0])s){
               if(arr[1][1]==1) return "A";
             else if(arr[1][1]==0)return "B";
        }
        
       for(int i=0;i<3;i++){
       for(int j=0;j<3;j++) {
           if(arr[i][j]==-1)
                    return "Pending";
       }
       }
        
        return "Draw";
    }
};
