class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arry) {
        vector<vector<int>> ans;
        sort(arry.begin() , arry.end());
        for(int i = 0 ; i < arry.size() ; i++){
            int j = i + 1; int k = (arry.size() - 1);
            if(i > 0 && arry[i] == arry[i - 1]){
                continue;
            }
            while(k > j){
                if(arry[i] + arry[j] + arry[k] == 0){
                    vector<int> put = {arry[i] , arry[j] , arry[k]};
                    j++;
                    k--;
                    ans.push_back(put);
                    while(j <k && arry[j] == arry[j - 1]){
                    j++;
                }
                }else if(arry[i] + arry[j] + arry[k] > 0){
                    k--;
                }else{
                    j++;
                }
            }

        }
        return ans;
    
        
    }
};