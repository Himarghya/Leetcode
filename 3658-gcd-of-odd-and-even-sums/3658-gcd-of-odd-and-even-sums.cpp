class Solution {
public:
    int SumEvenFunction(int n){
        int sumEven = 0;
        for(int i = 0 ; i <= n*2 ; i++){
            if(i % 2 == 0){
                sumEven += i;
            }
        }
        return sumEven;
    }
    int SumOddFunction(int n ){
        int sumOdd = 0;
        for(int i = 0 ; i <= n*2 ; i++){
            if(i % 2 != 0){
                sumOdd += i;
            }
        }
        return sumOdd;
    }
    int GCD(int n1 , int n2){
        int ans = 0;
        for(int i = 1 ; i <= min(n1 , n2) ; i++){
            if(n1 % i == 0 && n2 % i == 0){
                ans = i;
            }
        }
        return ans;
    }

    int gcdOfOddEvenSums(int n) {
        int n1 = SumEvenFunction(n);
        int n2 = SumOddFunction(n);
        return GCD(n1 , n2);
    }
};