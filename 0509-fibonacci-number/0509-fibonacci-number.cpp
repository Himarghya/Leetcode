class Solution {
public:
int SumofSeries(int n){
    if(n==1){
        return 1;
    }else if(n <= 0){
        return 0;
    }
    return SumofSeries(n-1) + SumofSeries(n - 2);
}

    int fib(int n) {
        if(n == 1){
            return 1;
        }
        return SumofSeries(n - 1) + SumofSeries(n - 2); 
    }
};