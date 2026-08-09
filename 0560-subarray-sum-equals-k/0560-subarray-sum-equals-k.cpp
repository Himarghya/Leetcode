class Solution {
public:
    int subarraySum(vector<int>& array, int target) {
         vector<int> prefix(array.size() , 0);
  prefix[0] = array[0];
  for(int i = 1 ; i < array.size() ; i ++){
    prefix[i] = prefix[i - 1] + array[i];
  }
  unordered_map<int , int> map;
  int count = 0;
  for(int j = 0 ; j < array.size() ; j ++){
    if(target == prefix[j]){
        count++;
    }
    int sum =  prefix[j]- target ;
    if(map.find(sum) != map.end()){
        count+=map[sum];
    }
     if(map.find(prefix[j]) == map.end()){
        map[prefix[j]] = 0;
    }
    map[prefix[j]]++;

  }
  return count;
        
    }
};