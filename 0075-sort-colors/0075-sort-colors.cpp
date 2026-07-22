class Solution {
public:
    void sortColors(vector<int>& nums) {
        int NumOfZeroes = 0;int  NumOfOnes =0;int  NumOfTwos = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                NumOfZeroes ++;
            }else if (nums[i] == 1){
                NumOfOnes++;
            }else{
                NumOfTwos++;
            }
        }
        int indx =0;
        for(int i = 0 ; i < NumOfZeroes; i++ ){
            nums[indx++] = 0;
        }
        for(int i = 0 ; i < NumOfOnes; i++ ){
            nums[indx++] = 1;
        }
         for(int i = 0 ; i < NumOfTwos; i++ ){
            nums[indx++] = 2;
        }
        
    }
};