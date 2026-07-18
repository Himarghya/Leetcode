class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int middle = nums.size() - 2;
        if(nums.size() == 1){
            return nums[0];
        }else{
            while(start <= middle){
                if(nums[start] != nums[start + 1] ){
                    return nums[start];
                }else{
                    start += 2;
                }
            }

        }
        return nums[nums.size() - 1];
    }
};