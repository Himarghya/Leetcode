class Solution {
public:
   bool Issafe(vector<string> chessBoard , int rows, int coloumns){
      for(int i = 0; i <chessBoard.size();i++ ){
        if (chessBoard[rows][i] =='Q'){
            return false;
        }
      }
      for(int i = 0; i <chessBoard.size();i++ ){
        if (chessBoard[i][coloumns] == 'Q'){
            return false;
        }
      }
      for(int i = rows , j = coloumns;  i >= 0 && j < chessBoard.size() ; i-- , j++){
        if(chessBoard[i][j] == 'Q'){
            return false;
        }
      }
      for(int i = rows , j = coloumns;  i >= 0 && j >= 0 ; i-- , j--){
        if(chessBoard[i][j] == 'Q'){
            return false;
        }
      }
      return true;
   }

    void PlaceQueens(vector<string>& chessBoard , int rows ,vector<vector<string>>& ans ){
        if(rows == chessBoard.size()){
            ans.push_back(chessBoard);
            return;
        }
        for(int j = 0; j <chessBoard.size(); j++ ){
            if(Issafe( chessBoard, rows, j )){
                chessBoard[rows][j] = 'Q';
                PlaceQueens(chessBoard , rows+1 , ans );
                chessBoard[rows][j] ='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
       vector<string> chessBoard(n, string(n, '.'));
       vector<vector<string>> ans;
        PlaceQueens(chessBoard, 0 , ans);
        return ans;
        
    }
};