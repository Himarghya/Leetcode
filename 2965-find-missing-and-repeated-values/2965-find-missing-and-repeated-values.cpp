class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& matrix) {
          vector<int> ans;
    unordered_multimap<int, int> map;
    int n = matrix[0].size();// 2(0,1,2)
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            map.insert({matrix[i][j] , 1});
        }
    }
   int count = 0;
   for(int i = 1; i <= map.size() ; i++){
    if(map.count(i) == 2){
        count = i;
        break;
    }
   }
   ans.push_back(count);
   for(int i = 1 ; i <= (n*n) ; i++){
    auto it = map.find(i);
    if(it == map.end()){
        ans.push_back(i);
    }
   }
   return ans;
        
    }
};