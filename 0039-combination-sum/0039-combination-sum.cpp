class Solution {
public:
    set<vector<int>> s;
    void possibleCombination(vector<int>& candidates , int i , int target , vector<vector<int>>& ans , vector<int>&current){
        if(target == 0){
            if(s.find(current) == s.end() ){
                ans.push_back(current);
                s.insert(current);
                return;
            }
        }
        if(target < 0 || i== candidates.size()){
            return;
        }
        current.push_back(candidates[i]);
        possibleCombination(candidates, i+1, target-candidates[i] , ans , current);
        possibleCombination(candidates, i, target-candidates[i] , ans , current);
        current.pop_back();
        possibleCombination(candidates, i+1, target , ans , current);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        possibleCombination(candidates , 0 , target , ans , current);
        return ans;
    }
};