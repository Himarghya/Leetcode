class Solution {
public:
    int maximumCount(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> zero;
        int start=0;int end = nums.size() -1;
        while(start <= end){
            if(nums[start] >0){
                positive.push_back(nums[start]);
                start ++;
            }else if(nums[start] < 0){
                negative.push_back(nums[start]);
                start ++;
            }else if(nums[start] == 0){
                zero.push_back(nums[start]);
                start ++ ;
            }
        }
        return max(positive.size() , negative.size());
        
    }
};