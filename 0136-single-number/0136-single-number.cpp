class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int UniqueElement = 0;
        for(int i = 0; i < nums.size() ; i++){
            UniqueElement ^= nums[i];
        }
        return UniqueElement;
    }
};