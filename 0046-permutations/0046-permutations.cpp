class Solution {
public:
    void Permutations(vector<vector<int>>& ans , int indx, vector<int>& nums){
        if(indx == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = indx; i< nums.size() ; i++){
            swap(nums[i] , nums[indx]);
            Permutations(ans, indx + 1, nums);
            swap(nums[i], nums[indx]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        Permutations(ans , 0 , nums);
        return ans;
        
    }
};