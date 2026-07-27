class Solution {
public:
    int findMin(vector<int>& arry) {
        int start = 0 ; int end = arry.size() -1;
        int largest = 0; int index = 0;
        while(start <= end){
            if(arry[start] > arry[end]){
                end --;
            }else if(arry[start] < arry[end]){
                start ++;
            }else if(arry[start] == arry[end]){
                largest = arry[start];
                index = start;
                break;
            }
        }
        if(index == (arry.size() - 1)){
            return arry[0];
        }else{
            return arry[index + 1];
        }
        
    }
};