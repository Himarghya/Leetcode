class Solution {
public:
    void Subset(vector<int>& arry ,vector<int>& Current, vector<vector<int>>& ans, int i){
    if(i == arry.size()){
        ans.push_back(Current);
        return;
    }
    Current.push_back(arry[i]);
    Subset(arry,Current,ans,i+1);
    Current.pop_back();
    Subset(arry,Current,ans,i+1);
   }
    vector<vector<int>> subsets(vector<int>& arry) {
        vector<int> Current;
       vector<vector<int>> ans;
       Subset(arry , Current , ans , 0);

      return ans;
        
    }
};