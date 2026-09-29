class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 0;
        for(int i = 0; i< nums.size() ; i ++){
            if(count == 0){
                candidate = nums[i];
                count = 1;
            }else if(candidate == nums[i]){
                count++;
            }else if(candidate != nums[i]){
                count--;
            }
        }

        int num = 0;
        for(int i = 0; i< nums.size() ; i++){
            if(nums[i] == candidate){
                num++;
            }
        }

        if(num >= nums.size()/2){
            return candidate;
        }

        return -1;
        
    }
};