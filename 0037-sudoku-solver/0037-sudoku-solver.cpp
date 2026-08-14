class Solution {
public:

    bool IsCheck(vector<vector<char>>& board, int row, int coloumn, char number) {

        // Check row
        for(int i = 0; i < 9; i++) {
            if(board[row][i] == number) {
                return false;
            }
        }

        // Check column
        for(int i = 0; i < 9; i++) {
            if(board[i][coloumn] == number) {
                return false;
            }
        }

        // Find starting position of 3x3 box
        int RangeRows = (row / 3) * 3;
        int RangeColumn = (coloumn / 3) * 3;

        // Check 3x3 box
        for(int i = RangeRows; i < RangeRows + 3; i++) {
            for(int j = RangeColumn; j < RangeColumn + 3; j++) {

                if(board[i][j] == number) {
                    return false;
                }
            }
        }

        return true;
    }


    bool masterclass(vector<vector<char>>& board, int rows, int coloumns) {

        // Move to next row
        if(coloumns == 9) {
            rows++;
            coloumns = 0;
        }

        // Entire board completed
        if(rows == 9) {
            return true;
        }

        // Current cell already filled
        if(board[rows][coloumns] != '.') {
            return masterclass(board, rows, coloumns + 1);
        }

        // Current cell is empty
        for(int i = 0; i < 9; i++) {

            char number = '1' + i;

            // Check whether number can be placed
            if(IsCheck(board, rows, coloumns, number)) {

                // Place number
                board[rows][coloumns] = number;

                // Move to next cell
                if(masterclass(board, rows, coloumns + 1)) {
                    return true;
                }

                // Backtrack
                board[rows][coloumns] = '.';
            }
        }

        // No number worked
        return false;
    }


    void solveSudoku(vector<vector<char>>& board) {

        masterclass(board, 0, 0);
    }
};