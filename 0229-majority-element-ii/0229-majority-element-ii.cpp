class Solution {
public:
    vector<int> majorityElement(vector<int>& arry) {
        int freq1 =0 ;int count1 = 0;
        int freq2 = 1 ; int count2 =0;
       for(int i =0; i < arry.size() ; i++){
         if(arry[i] == freq1){
            count1++;
         }else if(arry[i] == freq2){
            count2++;
         }
         else if(count1 == 0){
            freq1 = arry[i];
            count1 = 1;
         }else if(count2 == 0){
            freq2 = arry[i];
            count2 = 1;
         }else{
            count1 --;
            count2--;
         }
        }
       count1 = 0 ; 
       count2 = 0;
      for(int i = 0 ; i < arry.size() ; i++){
        if(arry[i] == freq1 ){
            count1++;
        }else if(arry[i] == freq2){
            count2++;
        }
      }
    vector<int> ans;
    if(count1 > arry.size()/3){
        ans.push_back(freq1);
    }
     if(count2 > arry.size()/3){
        ans.push_back(freq2);
    }
       return ans; 
    }
};