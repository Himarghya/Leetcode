class Solution {
public:
    vector<int> majorityElement(vector<int>& arry) {
        vector<int> ans;
    int count1 = 0; int count2 = 0;
    int freq1 = 0; int freq2 = 0;
    for(int i = 0; i < arry.size(); i++){
        if( count1 == arry[i]){
             freq1++;
        }else if( count2 == arry[i]){
            freq2++;
        }else if(freq1 == 0){
             count1 = arry[i];
             freq1 = 1;
        }else if(freq2 == 0){
            count2 = arry[i];
            freq2 = 1;
            
        }else{
            freq1--; freq2--;
        }
    }
    int c1 = 0; int c2 = 0;
    for(int i = 0; i < arry.size(); i++){
        if(count1 == arry[i]){
            c1++;
        }else if(count2 == arry[i]){
            c2++;
        }
    }
    if(c1 > (arry.size() / 3)){
        ans.push_back(count1);
    }
    if(c2 > (arry.size() / 3)){
        ans.push_back(count2);
    }
    for(int i =0 ; i< ans.size() ; i++){
        cout << ans[i] << " ";
    }
       return ans; 
    }
};