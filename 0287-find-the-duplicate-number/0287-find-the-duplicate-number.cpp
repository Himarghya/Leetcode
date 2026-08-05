class Solution {
public:
    int findDuplicate(vector<int>& arry) {
    unordered_map<int , int> map;
    
    for(auto val : arry){
        if(map.find(val) != map.end()){
            return val;
        }
        map.insert({val , 1});
    }
       return -1; 
    }
};