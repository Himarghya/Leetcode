class Solution {
public:
    int countPrimes(int n) {
             vector<bool> array(n , true);
             int count = 0;
             for(int i = 2  ; i < n ; i++){
                if(array[i] == true){
                  count++;
                }
              for(int j = i ; j < n ; j+=i){
                array[j] = false;
            }
        }
        return count;
       
        
    }
};