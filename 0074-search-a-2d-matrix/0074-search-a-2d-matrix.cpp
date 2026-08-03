class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arry, int target) {
    int top = 0;
    int bottom = arry.size()-1;
    int row = -1;
    while(top <= bottom){
        int middle = top + ((bottom - top)/2);
        if(arry[middle][0] <= target && arry[middle][arry[0].size() -1] >= target){
            row = middle;
            break;
        }else if(target > arry[middle][arry[0].size() -1]){
            top =middle + 1;
        }else if(target < arry[middle][0]){
            bottom = middle - 1;
        }
    }
    if(row == -1){
        return false;
    }
    int start =0;
    int end = arry[row].size() - 1;
    while(start <= end){
        int middle = start + ((end - start)/2);
        if(arry[row][middle] == target){
            return true;
            break;
        }else if(arry[row][middle] > target){
            end = middle -1;
        }else if(arry[row][middle] < target){
            start = middle +1;
        }
    }
    return false;
    }
};