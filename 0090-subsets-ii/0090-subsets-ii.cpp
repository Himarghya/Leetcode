class Solution {
public:
void SubsetII(vector<int>& arry , vector<int>& Current,  set<vector<int>>& set, int i){
    if(i == arry.size()){
        set.insert(Current);
        return;
    }
    Current.push_back(arry[i]);
    SubsetII(arry, Current, set, i +1 );

    Current.pop_back();
    SubsetII(arry, Current,set, i +1 );
}

    vector<vector<int>> subsetsWithDup(vector<int>& arry) {
        sort(arry.begin() , arry.end());
        set<vector<int>> a; 
    vector<vector<int>> ans;
    vector<int> Current;
    SubsetII(arry, Current, a,0 );
    for(auto x: a){
        ans.push_back(x);
    }
    return ans;
    }
};